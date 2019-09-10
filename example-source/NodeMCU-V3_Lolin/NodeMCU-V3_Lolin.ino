#include <ESP8266WiFi.h>

const char* ssid = "GCAMP0824G"; //your WiFi Name
const char* password = "12345678a";  //Your Wifi Password

int ledPin = 2; //gpio2 on esp8266 module's built-in led.
//int ledPin = D3;
//int ledPin = 0;
//int ledPin = LED_BUILTIN;
//D3: gpio0: flash button
//D0: gpio16: user button
//$led1 = BUILTIN_LED;  //D0, gpio16, BUILTIN_LED: OnBoard LED
//$led2 = 2;    //Pin 5 D4/gpio2 Internal LED for LoLin V3

WiFiServer server(80);
void setup() {
  Serial.begin(115200);
  delay(10); 
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); 
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid); 
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected"); 
  server.begin();
  Serial.println("Server started");
  Serial.print("Use this URL to connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/"); 
}

void loop() {
  WiFiClient client = server.available();
  if (!client) {
    return;
  }
  Serial.println("new client");
  while(!client.available()){
    delay(1);
  } 
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush(); 
  int value = LOW;
  if (request.indexOf("/LED=ON") != -1)  {
    digitalWrite(ledPin, LOW);
    value = HIGH;
  }
  if (request.indexOf("/LED=OFF") != -1)  {
    digitalWrite(ledPin, HIGH);
    value = LOW;
  }
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); 
  client.println("");
  client.println("");
  client.print("Led is : "); 
  if(value == HIGH) {
    client.print("On");
  } else {
    client.print("Off");
  }
#if 0  
  client.println("");  
client.println(" On ");
   client.println(" Off ");  
  client.println(" ");
#endif
   client.println("<br><br>");
 client.println("<a href=\"/LED=ON\"\"><button>Turn On </button></a>");
 client.println("<a href=\"/LED=OFF\"\"><button>Turn Off </button></a><br />");
 client.println("</html>");
      
     delay(1);
   Serial.println("Client disonnected");
  Serial.println("");   
}

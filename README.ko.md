[English](README.md) | [한국어](README.ko.md)

---

# biniboard 프로젝트

이 프로젝트는 브레이크아웃 보드인 "biniboard"의 개발에 관한 것입니다. 기존의 **NodeMCU V3 Lolin 보드**를 위해 특별히 설계된 브레이크아웃 확장 보드 역할을 합니다. biniboard의 주요 목적은 Lolin 보드에서 이미 사용 가능한 3.3V 전원에 추가로 5V 전원을 제공하는 것입니다.

biniboard의 'bini'라는 이름은 개발자의 자녀인 수빈(Subin)과 성빈(Seongbin)의 애칭에서 따왔습니다.

## 관련 아두이노(.ino) 파일

NodeMCU V3 Lolin 보드와 관련된 예제 아두이노 스케치(.ino 파일)는 `example-source/NodeMCU-V3_Lolin/NodeMCU-V3_Lolin.ino`에서 찾을 수 있습니다. 이 파일은 biniboard와 함께 기본적인 사용법 또는 기능을 보여줍니다.

## 프로젝트 구조

```
/
├── README.md               - 프로젝트 개요 및 문서.
├── .git/                   - Git 버전 관리 시스템 파일.
├── biniboard-V1.0-pinout/   - biniboard V1.0 핀아웃 다이어그램.
│   ├── 2019-09-30 01.03.18.jpg - biniboard V1.0 핀아웃 이미지.
│   └── 2019-09-30 01.03.28.jpg - biniboard V1.0 핀아웃의 또 다른 이미지.
├── example-source/         - 예제 소스 코드 및 관련 파일.
│   ├── arduinoIDE.jpg      - 아두이노 IDE 설정 관련 이미지.
│   └── NodeMCU-V3_Lolin/   - NodeMCU V3 Lolin 전용 예제 코드.
│       └── NodeMCU-V3_Lolin.ino - NodeMCU V3 Lolin용 아두이노 스케치.
├── nodemcu-V3-pinout/      - NodeMCU V3 핀아웃 다이어그램.
│   └── nodemcu-lolin-V3-pinout.jpg - NodeMCU V3 Lolin 핀아웃 이미지.
├── pictures/               - 일반 프로젝트 사진.
│   ├── picture#1.jpg       - 프로젝트 사진 1.
│   └── picture#2.jpg       - 프로젝트 사진 2.
├── V1.0-PCB/               - biniboard V1.0 PCB 설계 관련 파일.
│   ├── 3D#1-PCB-2019-09-27 030953.png - PCB 3D 렌더링 (뷰 1).
│   ├── 3D#2-PCB-019-09-27 030953.png - PCB 3D 렌더링 (뷰 2).
│   ├── 3D#3-PCB-2019-09-27 030953.png - PCB 3D 렌더링 (뷰 3).
│   ├── artwork#1-2019-09-27 030953.png - PCB 아트워크 이미지.
│   └── PCB.jpg             - PCB 이미지.
└── V1.0-Schematic/         - biniboard V1.0 회로도 관련 파일.
    └── biniboard_V1.0-Schematics.png - biniboard V1.0 회로도 다이어그램.
```

## 라이센스

이 프로젝트는 MIT 라이센스에 따라 라이센스가 부여됩니다. 자세한 내용은 [LICENSE](LICENSE) 파일을 참조하십시오.
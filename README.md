# 🚦 AUTOSAR Traffic Light Control System

This repository contains a **model-based traffic light control system** developed using **MATLAB/Simulink and Stateflow**, with an **AUTOSAR-compliant software architecture** and automatically generated production C code.

The project demonstrates the implementation of a safety-oriented traffic light controller using **AUTOSAR Classic Platform**, including software component architecture, RTE interfaces, ARXML descriptions, and embedded code generation.

---

## 📂 Project Structure

The repository is organized to separate the **Simulink/Stateflow model**, AUTOSAR architecture metadata, and generated production code.

```text
traffic-light-controller/
│
├── README.md
├── .gitignore
│
├── models/
│   └── feux_signalisation.slx
│
├── metadata/
│   └── autosar.xmi
│
└── generated_code/
    └── feux_signalisation_component/
        ├── feux_signalisation.c
        ├── feux_signalisation.h
        └── *.arxml
```

### 📁 Directory Description

| Directory         | Description                                               |
| ----------------- | --------------------------------------------------------- |
| `models/`         | Main Simulink/Stateflow model                             |
| `metadata/`       | AUTOSAR software component architecture and configuration |
| `generated_code/` | Automatically generated C source, header, and ARXML files |
| `.gitignore`      | MATLAB/Simulink temporary file and cache exclusions       |

---

## 🛠️ Features & Implementation

### 🚦 Traffic Light Control Logic

The traffic light behavior is modeled using **Simulink and Stateflow** with three main operating modes:

* 🟢 **Day Mode** — Standard traffic light sequencing with deterministic timing.
* 🌙 **Night Mode** — Sensor-dependent and optimized operation.
* ⚠️ **Degraded Mode** — Fail-safe flashing behavior when a sensor or system error is detected.

The controller dynamically changes its behavior according to environmental conditions and system status.

---

### ⏱️ Temporal Logic & Validation

The Stateflow model implements deterministic state transitions based on:

* Precise timing delays
* Traffic light states
* `isNight` environmental input
* `sensorError` diagnostic input
* System operating mode

This allows different operating and fault scenarios to be simulated and validated directly within Simulink.

---

## 🏗️ AUTOSAR Architecture

The traffic light controller is implemented as an **AUTOSAR Atomic Software Component (ASWC)**.

The model includes AUTOSAR-compatible interfaces and mappings between Simulink signals and AUTOSAR software component ports.

```text
             ┌─────────────────────────────┐
             │     AUTOSAR SWC             │
             │                             │
             │  Traffic Light Controller   │
             │                             │
             │  ┌───────────────────────┐  │
 Inputs ────► │  │ Stateflow Control     │  │ ────► Outputs
             │  │                       │  │
             │  │ • Day Mode            │  │
             │  │ • Night Mode          │  │
             │  │ • Degraded Mode       │  │
             │  └───────────────────────┘  │
             └──────────────┬──────────────┘
                            │
                            ▼
                     AUTOSAR RTE
                            │
                            ▼
                    ECU Software Stack
```

---

## 🔌 AUTOSAR Interface Mapping

The embedded Simulink ports are mapped to an **AUTOSAR Atomic Software Component**.

The generated software uses standard AUTOSAR **Run-Time Environment (RTE)** interfaces for communication between the application software and the ECU software architecture.

Examples include:

```c
Rte_IRead_...
Rte_IWrite_...
```

These APIs provide standardized data exchange between the application software and the AUTOSAR RTE.

---

## ⚙️ AUTOSAR Configuration

| Parameter                    | Configuration                     |
| ---------------------------- | --------------------------------- |
| **AUTOSAR Platform**         | Classic Platform                  |
| **Software Component**       | Atomic Software Component         |
| **Code Generation Target**   | `autosar.tlc`                     |
| **RTE Interface**            | AUTOSAR RTE                       |
| **Hardware Target**          | Generic 32-bit Embedded Processor |
| **Architecture Description** | AUTOSAR XMI / ARXML               |

---

## 💻 Code Generation

The project supports automatic generation of **AUTOSAR-compliant embedded C code** using **Embedded Coder** and **AUTOSAR Blockset**.

Code generation can be launched from the AUTOSAR workflow or using:

```text
Ctrl + B
```

The generated artifacts include:

```text
feux_signalisation.c
feux_signalisation.h
*.arxml
```

The generated code contains AUTOSAR RTE API calls for standardized communication between the software component and the runtime environment.

---

## 🧪 Validation Scenarios

The model can be tested using different scenarios:

| Scenario              | Expected Behavior                    |
| --------------------- | ------------------------------------ |
| ☀️ Day mode           | Standard traffic light sequence      |
| 🌙 Night mode         | Optimized/sensor-dependent operation |
| ⚠️ Sensor error       | Degraded mode                        |
| 🚨 Critical condition | Fail-safe flashing                   |
| 🔄 Mode transition    | Deterministic state transition       |

---

## 📦 Generated Artifacts

The repository includes several types of generated artifacts:

### C Source Code

```text
feux_signalisation.c
```

Contains the generated application implementation.

### Header File

```text
feux_signalisation.h
```

Contains declarations and interfaces required by the generated application.

### AUTOSAR XML

```text
*.arxml
```

Contains AUTOSAR architectural and configuration information required for integration into an AUTOSAR ECU software environment.

---

This project is intended for **educational and research purposes** and is not intended for direct deployment in safety-critical automotive systems without appropriate verification, validation, and certification processes.

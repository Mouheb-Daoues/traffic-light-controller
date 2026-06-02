# AUTOSAR Traffic Light Control System

This repository contains a Simulink model (`feux_signalisation.slx`) for a traffic light controller, along with its automatically generated compliance code and architectural descriptions adhering to the **AUTOSAR (Automotive Open System Architecture)** standard.

---

## 📂 Project Structure

The project is organized as follows to separate the graphical design, architecture metadata, and the generated production code:

```text
├── README.md                       # Project documentation
├── .gitignore                      # MATLAB/Simulink cache exclusion rules
├── models/
│   └── feux_signalisation.slx      # Main Simulink / Stateflow model
├── metadata/
│   └── autosar.xmi                 # AUTOSAR software component description
└── generated_code/                 # Production C/C++ and ARXML files
    └── feux_signalisation_component/
        ├── feux_signalisation.c    # Application source code
        ├── feux_signalisation.h    # Application header file
        └── *.arxml                 # AUTOSAR XML export artifacts

🛠️ Features & Implementation
Traffic Light Logic: Modeled using Simulink and Stateflow charts to handle complex logic across different environments: Day mode (standard cycling), Night mode (sensor-dependent/optimized), and Degraded mode (fail-safe flashing).

Temporal Logic & Validation: Simulated real-time deterministic behavior and state transitions based on precise time delays and sensory inputs (isNight, sensorError).

AUTOSAR Interface Mapping: Embedded ports are mapped to an Atomic Software Component (AtomicSoftwareComponent) with standard AUTOSAR Run-Time Environment (RTE) elements.

🚀 How to Run and Generate Code
Prerequisites
MATLAB & Simulink (Recommended: R2024a or newer)
Embedded Coder
AUTOSAR Blockset

Steps
Clone this repository to your local machine:
Bash
git clone https://github.com/Mouheb-Daoues/traffic-light-controller.git
Open MATLAB and navigate to the project root directory.
Open the model located at models/feux_signalisation.slx.
Launch the AUTOSAR Component Designer app from the Simulink Apps tab to inspect port mappings and configurations.
To regenerate the AUTOSAR-compliant code, press Ctrl + B or click Generate Code within the AUTOSAR tab.

⚙️ Configuration Details

AUTOSAR Platform: Classic Platform
Code Generation Target: autosar.tlc
API Validation: Verifies standard-compliant data exchange via Rte_IRead and Rte_IWrite API calls.
Hardware Implementation: Generic 32-bit Embedded Processor

🛑 Git Management (Avoid Cache Clutter)
This repository includes a .gitignore file specifically configured for MATLAB/Simulink. It ensures that local binary artifacts, simulation caches, and temporary files (such as slprj/ or *.slxc files) are not tracked, keeping the repository clean and lightweight.
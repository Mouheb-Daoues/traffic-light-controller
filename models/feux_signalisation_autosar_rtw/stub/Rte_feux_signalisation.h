/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "feux_signalisation"
   ARXML schema: "4.3"
   File generated on: "23-Mar-2026 16:47:12"  */

#ifndef Rte_feux_signalisation_h
#define Rte_feux_signalisation_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_feux_signalisation_Step_LightOutput_couleur Rte_IWrite_feux_signalisation_feux_signalisation_Step_LightOutput_couleur

void Rte_IWrite_feux_signalisation_Step_LightOutput_couleur(Double u);

#define Rte_IWriteRef_feux_signalisation_Step_LightOutput_couleur Rte_IWriteRef_feux_signalisation_feux_signalisation_Step_LightOutput_couleur

Double* Rte_IWriteRef_feux_signalisation_Step_LightOutput_couleur(void);

/* Entry point functions */
extern FUNC(void, feux_signalisation_CODE) feux_signalisation_Init(void);
extern FUNC(void, feux_signalisation_CODE) feux_signalisation_Step(void);

#endif

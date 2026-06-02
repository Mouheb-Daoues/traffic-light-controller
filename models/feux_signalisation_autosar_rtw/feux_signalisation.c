/*
 * File: feux_signalisation.c
 *
 * Code generated for Simulink model 'feux_signalisation'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Mar 23 16:46:56 2026
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "feux_signalisation.h"
#include "feux_signalisation_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define feux_signalisation_IN_orange   ((uint8)1U)
#define feux_signalisation_IN_rouge    ((uint8)2U)
#define feux_signalisation_IN_vert     ((uint8)3U)

/* Block states (default storage) */
DW_feux_signalisation_T feux_signalisation_DW;

/* Model step function */
void feux_signalisation_Step(void)
{
  sint32 rtb_couleur;

  /* Chart: '<Root>/Chart' */
  if (feux_signalisation_DW.temporalCounter_i1 < 15U) {
    feux_signalisation_DW.temporalCounter_i1++;
  }

  if (feux_signalisation_DW.is_active_c3_feux_signalisation == 0U) {
    feux_signalisation_DW.is_active_c3_feux_signalisation = 1U;
    feux_signalisation_DW.is_c3_feux_signalisation = feux_signalisation_IN_vert;
    feux_signalisation_DW.temporalCounter_i1 = 0U;
    rtb_couleur = 1;
  } else {
    switch (feux_signalisation_DW.is_c3_feux_signalisation) {
     case feux_signalisation_IN_orange:
      rtb_couleur = 2;
      if (feux_signalisation_DW.temporalCounter_i1 >= 3U) {
        feux_signalisation_DW.is_c3_feux_signalisation =
          feux_signalisation_IN_rouge;
        feux_signalisation_DW.temporalCounter_i1 = 0U;
        rtb_couleur = 3;
      }
      break;

     case feux_signalisation_IN_rouge:
      rtb_couleur = 3;
      if (feux_signalisation_DW.temporalCounter_i1 >= 15U) {
        feux_signalisation_DW.is_c3_feux_signalisation =
          feux_signalisation_IN_vert;
        feux_signalisation_DW.temporalCounter_i1 = 0U;
        rtb_couleur = 1;
      }
      break;

     default:
      /* case IN_vert: */
      rtb_couleur = 1;
      if (feux_signalisation_DW.temporalCounter_i1 >= 15U) {
        feux_signalisation_DW.is_c3_feux_signalisation =
          feux_signalisation_IN_orange;
        feux_signalisation_DW.temporalCounter_i1 = 0U;
        rtb_couleur = 2;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Outport: '<Root>/couleur' */
  Rte_IWrite_feux_signalisation_Step_LightOutput_couleur(rtb_couleur);
}

/* Model initialize function */
void feux_signalisation_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

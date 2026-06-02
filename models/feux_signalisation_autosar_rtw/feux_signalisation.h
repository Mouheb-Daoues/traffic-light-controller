/*
 * File: feux_signalisation.h
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

#ifndef RTW_HEADER_feux_signalisation_h_
#define RTW_HEADER_feux_signalisation_h_
#ifndef feux_signalisation_COMMON_INCLUDES_
#define feux_signalisation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_feux_signalisation.h"
#endif                                 /* feux_signalisation_COMMON_INCLUDES_ */

#include "feux_signalisation_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_feux_signalisation_T {
  uint8 is_active_c3_feux_signalisation;/* '<Root>/Chart' */
  uint8 is_c3_feux_signalisation;      /* '<Root>/Chart' */
  uint8 temporalCounter_i1;            /* '<Root>/Chart' */
} DW_feux_signalisation_T;

/* Block states (default storage) */
extern DW_feux_signalisation_T feux_signalisation_DW;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'feux_signalisation'
 * '<S1>'   : 'feux_signalisation/Chart'
 */
#endif                                 /* RTW_HEADER_feux_signalisation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

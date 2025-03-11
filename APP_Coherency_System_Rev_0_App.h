/*
 * File: APP_Coherency_System_Rev_0_App.h
 *
 * Code generated for Simulink model 'APP_Coherency_System_Rev_0_App'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Mar 11 01:21:04 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_APP_Coherency_System_Rev_0_App_h_
#define RTW_HEADER_APP_Coherency_System_Rev_0_App_h_
#ifndef APP_Coherency_System_Rev_0_App_COMMON_INCLUDES_
#define APP_Coherency_System_Rev_0_App_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                     /* APP_Coherency_System_Rev_0_App_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T APP_vSensor1;                 /* '<Root>/APP_vSensor1' */
  real_T APP_vSensor2;                 /* '<Root>/APP_vSensor2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T APP_bSensor1Failure;       /* '<Root>/APP_bSensor1Failure' */
  boolean_T APP_bSensor2Failure;       /* '<Root>/APP_bSensor2Failure' */
  boolean_T APP_bCoherencyFailure;     /* '<Root>/APP_bCoherencyFailure' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void APP_Coherency_System_Rev_0_App_initialize(void);
extern void APP_Coherency_System_Rev_0_App_step(void);

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
 * '<Root>' : 'APP_Coherency_System_Rev_0_App'
 * '<S1>'   : 'APP_Coherency_System_Rev_0_App/APP_Coherency_System'
 */
#endif                        /* RTW_HEADER_APP_Coherency_System_Rev_0_App_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

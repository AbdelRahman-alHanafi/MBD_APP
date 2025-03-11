/*
 * File: APP_Coherency_System_Rev_0_App.c
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

#include "APP_Coherency_System_Rev_0_App.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void APP_Coherency_System_Rev_0_App_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/APP_Coherency_System' */
  /* Outport: '<Root>/APP_bSensor1Failure' incorporates:
   *  Constant: '<S1>/Max_value'
   *  Constant: '<S1>/Min_value'
   *  Inport: '<Root>/APP_vSensor1'
   *  Logic: '<S1>/Logical Operator'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtY.APP_bSensor1Failure = ((rtU.APP_vSensor1 < 0.5) || (rtU.APP_vSensor1 > 4.5));

  /* Outport: '<Root>/APP_bSensor2Failure' incorporates:
   *  Constant: '<S1>/Max_value'
   *  Constant: '<S1>/Min_value'
   *  Inport: '<Root>/APP_vSensor2'
   *  Logic: '<S1>/Logical Operator1'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  rtY.APP_bSensor2Failure = ((rtU.APP_vSensor2 < 0.5) || (rtU.APP_vSensor2 > 4.5));

  /* Outport: '<Root>/APP_bCoherencyFailure' incorporates:
   *  Constant: '<S1>/Coh_value'
   *  Inport: '<Root>/APP_vSensor1'
   *  Inport: '<Root>/APP_vSensor2'
   *  RelationalOperator: '<S1>/Relational Operator4'
   *  Sum: '<S1>/Add'
   */
  rtY.APP_bCoherencyFailure = (rtU.APP_vSensor1 + rtU.APP_vSensor2 != 5.0);

  /* End of Outputs for SubSystem: '<Root>/APP_Coherency_System' */
}

/* Model initialize function */
void APP_Coherency_System_Rev_0_App_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

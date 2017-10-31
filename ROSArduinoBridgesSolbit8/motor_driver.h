/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef SOLBIT1_G_PROTO_MOTOR_DRIVER  
  #define DIR1  14
  #define PWM1  10
  #define DIR2  9
  #define PWM2  8
  #define POWER_DRIVER 12  
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);

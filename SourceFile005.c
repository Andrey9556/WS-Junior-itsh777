#pragma config(Sensor, port4,  3,              sensorVexIQ_Color12Color)
#pragma config(Sensor, port7,  ru,             sensorVexIQ_Distance)
#pragma config(Motor,  motor1,          b,             tmotorNone, openLoop)
#pragma config(Motor,  motor5,          z,             tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor6,          a,             tmotorVexIQ, PIDControl, reversed, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  motor[�] = 50;
  wait1Msec(1000);
  motor[�] = 0;
  wait1Msec(1000);

}
#pragma config(Sensor, port4,  3,              sensorVexIQ_Color12Color)
#pragma config(Motor,  motor1,          1,             tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          2,             tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
 if(getColorName(nDeviceIndex)=255
 motor[motor6] = motor[motor1]= 127


}


#pragma config(Motor,  motor1,          a,             tmotorVexIQ, PIDControl, reversed, driveRight, encoder)
#pragma config(Motor,  motor6,          motor2,        tmotorVexIQ, PIDControl, reversed, driveLeft, encoder)
#pragma config(Motor,  motor10,         motor4,        tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor11,         motor3,        tmotorVexIQ, PIDControl, reversed, encoder)
task main()
{
	motor[motor3] = -50;
	wait1Msec(200);

  motor[a] = 50;
  motor[motor2] = 0;
  wait1Msec(1000);

  motor[a] = 0;
  motor[motor2] = 0;
  wait1Msec(100);

  motor[a] = 50;
  motor[motor2] = 50;
  wait1Msec(4500);

  motor[a] = 0;
  motor[motor2] = 0;
  wait1Msec(100);

  motor[motor3] = 50;
	wait1Msec(200);

  motor[a] = 0;
  motor[motor2] = 50;
  wait1Msec(2000);

  motor[a] = 0;
  motor[motor2] = 0;
  wait1Msec(100);

  motor[a] = 50;
  motor[motor2] = 50;
  wait1Msec(9000);

  motor[a] = 0;
  motor[motor2] = 0;
  wait1Msec(100);

  motor[motor3] = -50;
	wait1Msec(200);

	 motor[motor3] = 0;
	wait1Msec(200);

	motor[a] = -50;
  motor[motor2] = -50;
  wait1Msec(1000);
}

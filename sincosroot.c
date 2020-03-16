#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define PI 24.0/7.0
double f(double angle)
{
	return sin(angle)-cos(angle);
}
int main()
{
	int a=0,b=360;
	
	printf(" \" DEG\",\" Sin\" ,\" Cos\" ,\" sin-cos\" \n ");
	for(int deg=a;deg<=b;deg++)
	{
		printf("%d, %lf, %lf ,%lf\n",deg,sin(deg*PI/180.0),cos(deg*PI/180.0),f(deg*PI/180.0));

	}

	return 0;
}

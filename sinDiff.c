#include<stdio.h>
#include<stdlib.h>

#include<math.h>

double h;
double F(double x)
{
	return (sin(x+h)-sin(x-h))/(2.0*h);
}

int main()
{

	double a=0,b=2*3.14159;
	h=(b-a)/200.0;

	printf("\"x\", \"sin(x)\",\"f(x)\"\n");

	printf("%lf,%lf,%lf\n",0.0,sin(a),sin(a+h)/h);

	for(int i=1;i<200;i++)
	{
		double x=a+i*h;
		printf("%lf,%lf,%lf\n",x,sin(x),F(x));
	}
	printf("%lf,%lf,%lf\n",b,sin(b),(sin(b)-sin(b-h))/h);

	return 0;
}


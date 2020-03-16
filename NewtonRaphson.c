#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double g(double x)
{
	return 1-x*x-x;
}

double gp(double x)
{
	return -2*x-1;
}

int main()
{
	double a=0. ,x0,eps=1.0e-6;
	int i=0;

	while(1)
	{
		x0= a- g(a)/gp(a);
		i++;

		if(fabs(g(x0))< eps)
		{
			printf("Root= %14.10g and iter= %d\n",x0,i);
			exit(0);
		}
		a=x0;

	}
	return 0;
}

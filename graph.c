#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

	double deg = 3.1416/180;
	
	printf("\"sinx\",\"cosx\"\n");
	int i=0;
	for( i=-360; i<=360; i= i+10 ){
		double x = deg*i;
		printf("%.4lf,%.4lf\n",sin(x), cos(x));
	}
	
	return 0;
}		


#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    double x[n],y[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
    }
     
    double h=(x[n-1]-x[0])/200.0;
    
    double df[n];
    df[0]= ( y[1]-y[0])/h;
    df[n-1]= ( y[n-1]-y[n-2])/h;
    
    for(i=1;i<n-1;i++)
    {
        df[i]=( y[i+1]- y[i-1])/(2*h);
    }
    
    printf("\"x\",\"f(x)\",\" f'(x)\"\n");
    for(i=0;i<n;i++)
    {
        printf("%lf, %lf, %lf\n",x[i] ,y[i], df[i]);
    }
    
    return 0;    
        

}

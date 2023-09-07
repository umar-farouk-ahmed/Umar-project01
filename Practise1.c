// Math | log, log10, sin function
#include<stdio.h>
#include<math.h>
int main(){
    double x=10.825;
    double result=log(x);
    printf("log(%0.3lf)=%0.1lf\n",x,result);
    double y=5.12;
    double n=exp(y);
    printf("exp(%0.2lf)=%0.2lf\n",y,n);
    double angle=30;
    double z=sin(angle * (3.1416/ 180.0));
    printf("sin(%0.2lf)=%0.2lf\n",angle,z);
    return 0;
}
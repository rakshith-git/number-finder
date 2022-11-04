#include <stdio.h>
#include <math.h>
int main()
{
long double e=3.141592653589793;
long double a=0,b=2,c=0.0;
long z=10;
int n=1;
printf("started\n\n\n");
while(c<=e)
{
c=exp((1/b)*log(a));
//c=pow(a,(1/b));
if(c<=e)
{
//printf("%.10f     %0.1f     %.1f  %d\n",c,a,b,z);
if(floor(c*z)==floor(e*z))
{

if((floor(c*z)/z)!=(floor(c*z)/z))
break;

printf("%.15f  is the   %.1Lf  th root of   %.1Lf  correct to  %d decimals\n", (floor(c*z)/z),b,a,n);
int temp=z;
z*=10;
n++;
//if(z%temp!=0)
//break;
}
a++;

}
else
{
b++;
c=exp((1/b)*log(a));
//printf("the root is currently  %Lf\n",b);
//c=pow(a,(1/b));
a=ceil(a*(ceil(c*z)/z));
}
}
return 0;
}

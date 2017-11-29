#include<stdio.h>
int main()
{
int a,b,den,num,rem,gcd;
printf("enter two number");
scanf("%d%d",&a,&b);
if(a>b)
{
num=a;
den=b;

}
else
{
num=b;
den=a;

}
rem=num%den;
while(rem!=0)
{
num=den;
den=rem;
rem=num%den;
}
printf("gcd is%d",gcd);
return 0;
}

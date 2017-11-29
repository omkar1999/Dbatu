#include<stdio.h>
main()
{
    int n,i=1,fact,s;
printf("enter number");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i;
s=i*i;
i++;
}
printf("fact and square is %d\n%d",fact,s);
return 0;
}

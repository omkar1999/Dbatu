#include<stdio.h>
#define maxsize 10
void main()
{
int a[maxsize];
int i,j,num,temp;
printf("enter the value of num\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
printf("input array");
for(i=0;i<num;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<num;i++)
{
for(j=0;j<(num-i-1);j++);
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is\n");
for(i=0;i<num;i++)
{
printf("%d",a[i]);
}
}

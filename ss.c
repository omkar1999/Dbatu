#include<stdio.h>
void main()
{
int i,j,r1,r2,c1,c2,a[20][20],b[20][20],c[20][20],k,s,ch;
char con;
do
{
printf("enter 1 for matrix addition\n 2 for matrix substraction\n 3 for multiplication");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter order of matrix");

scanf("%d%d",&r1,&c1);
printf("enter order of second matrix");
scanf("%d%d",&r2,&c2);
if(r1==r2&&r2==c2)
{
printf("enter element of matrix");
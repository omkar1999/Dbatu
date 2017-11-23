#include<stdio.h>
int main()
{
	int i=0, n=1;
	while(i<n&&1<n<50)
	{
	 if(n%n==0&&n%1==0&&n%i!=0)
	 {
	  printf("prime numbers are %d",i);
	  i=i++;
	 }
	 else
	 {
	  i=i++;
	 }
	return 0;
	}
}

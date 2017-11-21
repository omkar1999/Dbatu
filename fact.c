 #include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, i=1, fact; 	//num is any number, fact is factorial of entered number,i is initiating index
	printf("Enter any number:");
	scanf("%d", &num);
	fact=num;
while(i!=0&&i!=num)\]
	{
	fact=fact*i;	
	i=num-1;
	}
	printf("Factorial of number %d is %d", num, fact);
	
}

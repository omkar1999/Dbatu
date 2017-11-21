/****Program for verifying even number****/
#include<stdio.h>
int main()
{	
	int n;
                                 //n is any number given by user
	printf("Enter a number:");
	scanf("%d", &n);
n%2==0?printf("The given number %d is a even number",n):printf("The given number %d is a odd number",n);
                                //A number divisible by 2 is even
                               //Using conditional operator
return 0;
}
/****Output****
dell@dell-OptiPlex-7040:~$ gcc exm.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter a number:444
The given number 444 is a even number
*/

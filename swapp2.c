/****Program for swapping without using temporary no.****/
#include<stdio.h>
void main()
{
	int firstno, secondno;
	
	printf("Enter firstno and secondno");
	scanf("%d%d" ,&firstno, &secondno);

	firstno=firstno+secondno;
	secondno=firstno-secondno;
	firstno=firstno-secondno;
	
	printf("The swapped numbers are firstno=%d,secondno=%d", firstno, secondno);
}
/****output***
dell@dell-OptiPlex-7040:~$ gcc swapp2.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter firstno and secondno
4 5
The swapped numbers are firstno=5,secondno=4
*/


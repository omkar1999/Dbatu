#include<stdio.h>
int main()
{
	int n, r, c,temp;
	printf("enter no. of rows:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
	    temp=n;
	    for(c=1;c<temp;c++) 
	    {
	      printf(" ");
	    }
	      temp--;
            for(c=1;c<=(2*r)-1;c++)
	    {
	      printf("*");
	    }
            printf("\n");
      }
	return 0;
}

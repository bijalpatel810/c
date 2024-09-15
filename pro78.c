/* A
   A B
   A B C
   A B C D
   A B C D E */

#include<stdio.h>
int main()
{
	int i,j,a=65;

	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",a+j);
		}
	printf("\n");
	}

	return 0;
}
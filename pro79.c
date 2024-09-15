/* A
   B A
   C B A
   D C B A
   E D C B A */

#include<stdio.h>
int main()
{
	int i,j,r;
	char ch='A';

	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			r='A'-j;
			printf("%c",r+i);
		}
	printf("\n");
	}

	return 0;
}
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5 */

#include<stdio.h>
int main()
{
	int i,j,r=1;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",r+j);
		}
	printf("\n");
	}


	return 0;
}
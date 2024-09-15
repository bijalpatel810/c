/* 5
   5 4
   5 4 3
   5 4 3 2
   5 4 3 2 1 */

#include<stdio.h>
int main()
{
	int i,j,r=1;

	for(i=4;i>=0;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf("%d",j+r);
		}
	printf("\n");
	}

	return 0;
}
/* 5
   4 5
   3 4 5
   2 3 4 5
   1 2 3 4 5 */

#include<stdio.h>
int main()
{
	int i,j,r;

	for(i=4;i>=0;--i)
	{
		for(j=4;j>=i;--j)
		{
			r=5-j;
			printf("%d",r+i);
		}
	printf("\n");
	}


	return 0;
}
// Assign value 
#include<stdio.h>
int main()
{
	int x, y;
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);

	if(x<2000 || x>3000)
	{
		printf("\n x is %d",x);
	}
	if(y>=100 && y<=500)
	{
		printf("\n y is %d",y);
	}
	return 0;
}

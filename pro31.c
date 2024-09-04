// one value find divide by 5 and 3 or not
 
#include<stdio.h>
int main()
{
	int num;
	printf("\nenter num:");
	scanf("%d",&num);
	if(num % 15==0)
	{
		printf("\n num(%d)is divide by 5 and 3 ",num);
	}
	else
	{
		printf("\n num(%d)is not divide by 5 and 3",num);
	}
	return 0;
}
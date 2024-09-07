// 0.5,1,2.5,5.....n

#include<stdio.h>
int main()
{
	float i,j=0.5,n;
	printf("\n enter num :");
    scanf("%f",&n);

	for(i=0.5;i<=n;i++)
	{
		j=j+i;//j+=i
		printf("\t%f,",j);	
	}
	return 0;	
}      
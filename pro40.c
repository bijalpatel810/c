// electricity board
#include<stdio.h>
int main()
{
	int unit;
	float r,total;

	printf("\n enter unit:");
	scanf("%d",&unit);

	if(unit>0 && unit<=100)
	{
		r=(unit*0.60)+50;
		printf("\n amount is=%f",r);
	}
	else
	{
		if(unit>100 && unit<=300)
		{
			r=(unit*0.80)+50;
			printf("\n amount is=%f",r);
		}
		else(unit>300);
		{
			r=(unit*0.90)+50;
			printf("\n amount is=%f",r);
		}
	}
	if(unit>=300)
	{
		total=r*0.15;
		printf("\n amount after 300 rupess up=%f",total);
	}

	return 0;
}
		
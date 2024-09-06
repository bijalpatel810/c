// income tax

#include<stdio.h>
int main()
{
	float i,t;
	printf("\n enter the income");
	scanf("%f",&i);

	if(i<2500)
	{
		t=0;
	}
	else
	{
		if(i>=2500 && i<5000)
		{
			(t=(i-2500)*0.1);
		}
		else
		{
			if(i>=5000 && i<10000)
			{
				(t=(5000-2500)*0.1+(i-5000)*0.2);
			}
			else
			{
				(t=(5000-2500)*0.1+(10000-5000)*0.2+(i-10000)*0.3);
			}
		}
	}
	printf("\n tax pay : %f",t);
	return 0;
}

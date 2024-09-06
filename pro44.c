// evaluate total,percentage,grade


#include<stdio.h>
int main()
{
	int x,y,z,total;
	float per;
	printf("\nenter the marks x,y,z");
	scanf("%d%d%d",&x,&y,&z);

	total=x+y+z;
	printf("\n total=%d",total);

	per=total/300*100;
	printf("\n per=%f",per);
    
	if(per>75)
	{
		printf("\n grade A");
	}
	else if(per>60 && per<=75)
	{
		printf("\n grade B");
	}
	else if(per>45 && per<=60)
	{
		printf("\n grade C");
	}
	else if(per>=35 && per<=45)
	{
		printf("\n grade D");
	}
	else
	{
		//if(per<35){
		printf("\n fail");
		//}
	}
	return 0;

}
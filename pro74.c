/* A B C D E
   F G H I J 
   K L M N O
   P Q R S T
   U V W X Y */

#include<stdio.h>
int main()
{
	int i,j,r='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c",r);
			r++;
		}
		printf("\n");
	}


	return 0;
}
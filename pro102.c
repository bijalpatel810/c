/*  while 
1 to 10 even no total 2,4,6,8,10=30*/
#include<stdio.h>
int main()
{
    int i,t=0;
    i=0;
    while(i<=10)
    {
        printf("%d+",i);
        t=t+i;
        i+=2;
    }
    printf("=%d",t);
    return 0;
}

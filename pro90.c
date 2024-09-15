/* 1 to 5 print  do while loop */

#include<stdio.h>
int main()
{
    int i;
    i=1;

    do
    {
        print("%d \t",i++);
    } 
    while (i<=5);
    
    return 0;
}
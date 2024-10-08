/* do..while A
             b c
             D E F
             g h i j
             K L M N O */

#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=0;
    do
    {
        if(i%2==0)
        {
        j=0;
        do
        {
            printf("%c",a);
            a++;
            j++;
        }while(j<=i);
        }
        else
        {
            j=0;
        do
        {
            printf("%c",a+32);
            a++;
            j++;
        }while(j<=i);
        }
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}

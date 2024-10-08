/* do.while A
            B C
            D E F
            G H I J
            K L M N O */

            
#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%c",a);
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}

/* do..while 11 12 13 14 15
             21 22 23 24 25
             31 32 33 34 35
             41 42 43 44 45
             51 52 53 54 55 */


#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%d%d",i,j);

            j++;
        }while(j<=5);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}

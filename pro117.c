/* do..while 2 2 2 2 2
             4 4 4 4 4
             6 6 6 6 6
             8 8 8 8 8
             1010101010 */
#include<stdio.h>
int main()
{
    int i,j;
    i=2;
    do
    {
        j=2;
        do
        {
            printf("%d",i);
            j+=2;
        }while(j<=10);
        printf("\n");
        i+=2;
    }while(i<=10);
    return 0;
}

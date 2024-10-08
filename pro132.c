/* do..while 5
             4 4
             3 3 3
             2 2 2 2
             1 1 1 1 1 */


#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    do
    {
        j=5;
        do
        {
            printf("%d",i);
            j--;
        }while(j>=i);
        printf("\n");
        i--;
    }while(i>=1);
    return 0;
}

/* do..while 5
             5 4
             5 4 3
             5 4 3 2
             5 4 3 2 1 */


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
            printf("%d",j);
            j--;
        }while(j>=i);
        printf("\n");
        i--;
    }while(i>=1);
    return 0;
}

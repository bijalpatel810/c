/* while 1
         2  3
         4  5  6
         7  8  9  10
         11 12 13 14 15 */


#include<stdio.h>
int main()
{
    int i,j,a=1;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

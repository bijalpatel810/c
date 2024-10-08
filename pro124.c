/* while A
         B A
         C B A
         D C B A
         E D C B A */


#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=i;
        while(j>=1)
        {
            printf("%C",j+64);
            j--;
        }
        printf("\n");
        i++;
    }
    return 0;
}

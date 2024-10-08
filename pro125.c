/* while A
         A B
         A B C
         A B C D
         A B C D E */


#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%C",a);
            a++;
            j++;
        }
        printf("\n");
        a=65;
        i++;
    }
    return 0;
}

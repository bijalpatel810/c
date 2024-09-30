/* while
print 1,4,9,16...*/

#include<stdio.h>
int main()
{
    int i,a;
    i=1;
    while(i<=30)
    {
        a=i*i;
        printf("%d\t",a);
        i++;
    }
    return 0;
}

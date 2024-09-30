/* while 
print 1,2,4,8....*/
#include<stdio.h>
int main()
{
    int i;
    i=1;
    while(i<=30)
    {
        printf("%d\t",i);
        i*=2;
    }
    return 0;
}

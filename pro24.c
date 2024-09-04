// convert inch into cm

#include<stdio.h>
int main()
{
    float inch,cm;
    printf("\n enter inch :");
    scanf("%f",&inch);

    cm = inch * 2.54;

    printf("\n cm : %f",cm);

    return 0;
}

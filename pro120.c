/* while A B C D E
         F G H I J
         K L M N O
         P Q R S T
         U V W X Y */

         
#include<stdio.h>
int main()
{
   int i,j,a=65;
   i=1;
   while(i<=5)
   {
        j=1;
        while(j<=5)
        {
            printf("%c",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
   }
   return 0;
}

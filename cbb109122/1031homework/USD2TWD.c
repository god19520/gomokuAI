#include <stdio.h>

int main()
{
   float a,b;
   printf("1 USD = ? TWD : ");
   scanf("%f", &b);
   printf("How much USD dollar? ");
   scanf("%f", &a);
   a=a*b;
   printf("You can get %f TWD.\n", a*0.975);
}

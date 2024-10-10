#include <stdio.h>

int main()
{
   float a,pi;
   pi=3.14;
   printf("請輸入圓半徑: ");
   scanf("%f",& a);
   a=a*a*pi;
   printf("圓面積為%f平方公分\n", a);
}

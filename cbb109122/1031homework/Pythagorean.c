#include <stdio.h>
#include <math.h>
int main()
{
   int a,b;
   float c;
   printf("請輸入直角三角形邊長: ");
   scanf("%d %d",&a,&b);
   c=sqrt(a*a+b*b);
   printf("斜邊長為%f公尺\n",c);
}

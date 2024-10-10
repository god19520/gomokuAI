#include <stdio.h>

int main()
{
  char a;
  int b;
  printf("請輸入統一發票號碼: ");
  scanf("%7c%3d",&a ,&b);
  printf("最後三碼為%d\n",b);
  
}

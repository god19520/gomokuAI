#include <stdio.h>

int main()
{
  float a;
  int b,c;
  printf("請輸入距離: ");
  scanf("%d", &b);
  printf("請輸入時間: ");
  scanf("%d", &c);
  a=b/c;
  printf("速率為%f公尺/分鐘\n", a);
}

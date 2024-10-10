#include <stdio.h>

int main()
{
  int h,m,s;
  float t;
  printf("Please input a time (HH:MM:SS): ");
  scanf("%2d:%2d:%2d",&h,&m,&s);
  t=h+((float)m/60)+((float)s/3600);
  printf("%02d:%02d:%02d = %8.5f hours\n",h,m,s,t);
}

#include <stdio.h>

int main()
{
  int b;
  long int a;
  printf("Please input an integer: ");
  scanf("%ld%n", &a, &b);
  printf("The number %ld you have inputted has %d digits.\n", a, b);
}

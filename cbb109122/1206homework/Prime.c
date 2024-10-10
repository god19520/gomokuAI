#include<stdio.h>

int main()
{
  int i,j,n=1000,m=0;
  for(i=2;i<=n;i++)
  {
    m=0;
    for(j=1;j<=n;j++)
    {
      if(i%j==0) m++;
      if(m>2) break;
    }
    if(m<=2) printf("%d ",i);
  }
  printf("\n");
}

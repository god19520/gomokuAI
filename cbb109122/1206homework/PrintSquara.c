#include<stdio.h>

int main()
{
   int n,i,j;
   printf("Please input length of the square: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
      {
        if(i==1 || i==n)
        {
          printf("* ");
        }
        else
        {
          if(j==1 || j==n)
          {
            printf("* ");
          }
          else
          {
            printf("  ");
          }
        }
      }
     printf("\n");
   }
 
}

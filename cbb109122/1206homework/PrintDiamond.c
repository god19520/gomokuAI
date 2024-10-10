#include <stdio.h>

int main()
{
  int i,j,n;
  printf("Please input length of the diamond: ");
  scanf("%d",&n);
  n=n-1;
  for(i=1;i<=n+1;i++)
  {
    if(n==0)
      {
      printf("*\n");
      break;
      }
    for(j=1;j<=2*(n+1)-1;j++)
      if(j==n-i+2 || j==n+i)         
         printf("*");         
      else if(j<=2*(n+1)-1)
         printf(" ");
      else
         printf(" "); 
      printf("\n");      
  } 
  for(i=1;i<(n+1);i++)
  {
       for(j=1;j<=2*(n+1)-1;j++)
          if(j==i+1 || j==2*(n+1)-1-i)
     	  printf("*");
       else if(j<=2*(n+1)-1)
          printf(" ");
       else
          printf(" ");
       printf("\n");
  }     
}

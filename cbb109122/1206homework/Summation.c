#include<stdio.h>

int main()
{
  int n,i,a=2,b=3,c=5,ans=0;
  while(1)
  {
  printf("Please input a number: ");
  scanf("%d",&n);
  if(n<2)
    {
    printf("Your input number must be higher than 2!\n");
    }
  else
    { 
      for(i=2;i<=n;i++)
      {        
         if(i>=3) printf("+");        
         printf("%dx%d",a+1,a-1);
         a++;                    
      }
      printf("=");
      for(i=2;i<=n;i++)
      { 
        if(i>=3) printf("+");
        printf("%d",b);
        ans=ans+b;
        b=b+c;   
        c=c+2;                
      }
      printf("=%d",ans);      
      break;
    }
  }
  

  printf("\n");
}

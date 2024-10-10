#include <stdio.h>

int main()
{
   int a,b,x,y,ans,i;
   printf("Please input two numbers: ");
   scanf("%d %d",&a,&b);
   x=a;
   y=b; 
   if(x<y)
   {
      ans=x;
      x=y;
      y=ans;
      a=x;
      b=y;
   } 
   for(i=0;y>0;i++)
   {
      x=x-y;
      if(x<y)
      {
        ans=x;
        x=y;
        y=ans;
      }
   }
  
   printf("The GCD of %d and %d is %d.\n",a,b,x);

}

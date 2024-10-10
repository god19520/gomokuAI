#include<stdio.h>

int main()
{
   int n,ans=1,i;
   while(1)
   {
     printf("N? ");
     scanf("%d",&n);
     if(n>0)
       break;
     printf("Wrong Input! Try Again!\n");
   }
   for(i=1;i<=n;i++)
   {
      ans=ans*i;  
   }
   printf("%d! = %d\n",n,ans);
}

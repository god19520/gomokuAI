#include <stdio.h>

int main()
{
   int i,ans,num,pow;
   ans=1;
   printf("Please input number: ");
   scanf("%d",&num);
   printf("Please input the power of the number: ");
   scanf("%d",&pow);
   for(i=1;i<=pow;i++)
   { 
     ans=ans*num;
   }
   printf("%d to the power of %d is %d.\n",num,pow,ans);
}

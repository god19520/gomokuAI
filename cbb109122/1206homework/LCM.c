#include<stdio.h>

int main()
{
    int n1,n2,m;
    printf("Please input two numbers: ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
       m=n1;
    }
    else
    {
       m=n2;
    }
    while( m%n1 == m%n2 == 0)
    {
       m++;
    }
   printf("The LCM of %d and %d is %d.\n",n1,n2,m);
}

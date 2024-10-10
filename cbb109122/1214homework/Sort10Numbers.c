#include <stdio.h>
  
int main()
{
  int data[10];
  int flag[10];
  int i,j;
  int max;
  printf("Please input 10 numbers: ");
  for(i=0;i<10;i++)
     { scanf("%d",&data[i]);}
  printf("Sorted results: ");
  for(i=0;i<10;i++)
  {
     max=0;
     for(j=0;j<10;j++)
     {
        if(flag[j]!=1)
        {
          max=j;
          break;
        }
     } 
  for(j=1;j<10;j++)
  {
     if((data[max]<data[j])&&(flag[j]!=1))
     {
       max=j;
     }
  } 
  printf("%d",data[max]);
  flag[max]=1;
  if(i<9)
  printf(" ");
 }
 printf("\n");
}

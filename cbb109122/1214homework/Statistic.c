#include<stdio.h>

int main()
{
    int date[10];
    int max,min,i,sum=0;
    float avg;
    
    printf("Please input 10 numbers: ");
    for(i=0;i<10;i++)
    {
       scanf(" %d",&date[i]);
    }
      min=date[9];
    for(i=1;i<10;i++)
    {              
          if(min>date[i])
            min=date[i];       
    }
 
     max=date[9];
    for(i=1;i<10;i++)
       {
          if(max<date[i])
            max=date[i];
       }
    for(i=0;i<10;i++)
    {
       sum+=date[i];
    }
    avg=sum/10.0;
    printf("The maximal number is %d.\n",max);
    printf("The minimal number is %d.\n",min); 
    printf("The average of these ten numbers is %0.2f.\n",avg);
}

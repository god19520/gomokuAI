#include<stdio.h>

int main()
{
   int ans1[8]={2,1,8,8,1,5,3,4};
   int ans2[8]={5,3,0,5,0,4,1,6};
   int ans3[8]={8,5,1,7,4,7,7,8};
   int num[4];
   int data[8];
   int i,j,k; 
   
   printf("Please input your receipt number: ");
   scanf("%c%c%c%c%c%c%c%c%c%c",&j,&k,&data[0],&data[1],&data[2],&data[3],&data[4],&data[5],&data[6],&data[7]);
   for(i=0;i<8;i++)
   {
      data[i]=data[i]-48;
   } 
   for(i=0;i<8;i++)
   {
      if(data[i]==ans1[i]) 
        num[1]=num[1]+1;
   }
   for(i=0;i<8;i++)
   {     
      if(data[i]==ans2[i]) 
        num[2]=num[2]+1;
   }
   for(i=0;i<8;i++)
   { 
      if(data[i]==ans3[i]) 
       { num[3]=num[3]+1;}
   }
   //printf("%d,%d,%d\n",data[7],ans3[7],num[3]); 
   for(i=1;i<4;i++)
      {
         if(num[0]<num[i]){
           num[0]=num[i];}    
      }
   switch(num[0]) 
   {
      case 8:
         printf("Congratulations! This number has drawn a prize of 200000 (8 digits were matched).\n");
         break;
      case 7:
         printf("Congratulations! This number has drawn a prize of 40000 (7 digits were matched).\n");
         break;
      case 6:
         printf("Congratulations! This number has drawn a prize of 10000 (6 digits were matched).\n");
         break;
      case 5:
         printf("Congratulations! This number has drawn a prize of 4000 (5 digits were matched).\n");
         break;
      case 4:
         printf("Congratulations! This number has drawn a prize of 1000 (4 digits were matched).\n");
         break;
      case 3:
         printf("Congratulations! This number has drawn a prize of 200 (3 digits were matched).\n");
         break;
      default:
         printf("Sorry, this number has drawn no prize.\n");
         break;
   }
}


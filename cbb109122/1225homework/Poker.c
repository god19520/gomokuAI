#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int i,j;
  int temp;
  int cards[52];
  char points[]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  
  
  for(i=0;i<52;i++)
  {
     cards[i]=i;
  }
  srand(time(NULL));
  for(i=0;i<52;i++)
  {
     
     
     j = rand()%52;     
     temp = cards[i];
     cards[i] = cards[j];
     cards[j] = temp;
  }  
  for(i=0;i<52;i++)
  {
     switch(i)
     {
        case 13:
           printf("\n");
           break;
        case 26:
           printf("\n");
           break;
        case 39:
           printf("\n");
           break;
     }
     switch(cards[i]/13)
     {
        case 0:
           printf("\u2660");
           break;
        case 1:
           printf("\u2665");
           break;
        case 2:
           printf("\u2666");
           break;
        case 3:
           printf("\u2663");
           break;
     }
     printf("%c ", points[cards[i]%13]);
  }
  printf("\n");

}

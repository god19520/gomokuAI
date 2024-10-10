#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define true 1
#define false 0

int main()
{
  int i,j;
  int temp;
  int quit=false,wash=true,current=0,money=1000,bet=100;
  int cards[52];
  int x=6;
  char points[]={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  char cmd; 

  printf("-------------------------------\n");
  printf("Poker Game: Bigger or Smaller?!\n");
  printf("-------------------------------\n");
  printf("Press h for help.\n\n");
  while(!quit)
  {
  if(wash)
  {
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
    x=6;
    wash=false;
    current=0;
  }

    if(bet>money)
       bet=money;
    printf("[$%d][Bet %d] Cards(%d)\n", money, bet, 52-current);
    printf("Bigger or Smaller than %d (b/s)?",x+1);
    scanf(" %c", &cmd);
  
  switch(cmd)
  {
     case 'h':
        printf("h for help\n");
        printf("i for increasing your bet\n");
        printf("d for decreasing your bet\n");
        printf("b for guessing the card is bigger\n");
        printf("s for guessing the card is smaller\n");
        printf("w for re-washing the cards\n");
        printf("q for quit\n");
        break;
     case 'i':
        if(bet==money)
           printf("No more money to bet!\n");
        else
           bet=(bet+10)<=money? bet+10 : money;
        break;
     case 'd':
        if(bet==100)
           printf("Minimum bet is 100!\n");
        else
           bet = bet>=110? bet-10 : 100;
        break;
     case 'w':
        wash=true;
        current=0;
        break;
     case 'b':
     case 's':
        printf("The card is ");
        switch(cards[current]/13)
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
        printf("%c,", points[cards[current]%13]);
   
        if(((cmd=='b')&&(cards[current]%13>=x))||((cmd=='s')&&(cards[current]%13<=x)))
        {
           printf(" You win!\n");
           money+=bet;
           x=cards[current]%13;
        }
        else
        {
           printf(" You lose!\n");
           money-=bet;
           x=cards[current]%13;
        }
        current++;
        break;
     case 'q':
        quit=true;
  }
  if(money<100)
  {
     printf("Game Over!\n");
     quit=1;
  } 
  if(current==41)
  { 
     wash=true;
  }
  printf("Good Bye!\n"); 
  }
}  

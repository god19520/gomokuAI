#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define boolean int
#define true 1
#define false 0

int main()
{
    int card[52];
    char POINT[]={'A','2','3','4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    int i, p,temp;
    int suit, point;
    boolean quit=false;
    boolean washing=true;
    int money=1000, bet=100;
    char cmd;
    int current=0;
    
    printf("-------------------------------\nPoker Game: Bigger or Smaller?!\n");
    printf("-------------------------------\nPress h for help.\n\n");

    
    
    for(i=0;i<52;i++)
        card[i]=i;

    srand(time(NULL));



    while(!quit)
    {


        if(washing)
        {
            for(i=0;i<52;i++)
            {
                p = rand()%52;
                temp=card[i];
                card[i]=card[p];
                card[p]=temp;
            }
            washing=false;
            current=0;
        }

        if(bet>money)
            bet=money;
            
        printf("[$%d][Bet %d] Cards(%d)\n", money, bet, 52-current);
        printf("Bigger or Smaller than 7 (b/s)?");
        scanf(" %c", &cmd);

        switch(cmd)
        {
            case 'q': 
                        quit=true;
                        break;
            case 'a':
                        bet=money;
                        break;
            case 'i':
                        if(bet+100>money)
                            printf("No more money to bet!\n");                        
                        else
                            bet+=100;
                        break;
            case 'd':
                        if(bet-100>=100)
                            bet-=100;
                        else
                            printf("Minimum bet is 100!\n");
                        break;
            case 'h':
                        printf("h for help\ni for increasing your bet\nd for decreasing your bet\n");
                        printf("b for guessing the card is bigger than 7\n");
                        printf("s for guessing the card is smaller than 7\n");
                        printf("w for re-washing the cards\nq for quit\n");
                        break;
            case 'w':
                        washing=true;
                        break;
            case 'b':
            case 's':
                        printf("The card is ");                        
                        suit=card[current]/13;
                        switch(suit)
                        {
                            case 0: printf("\u2660"); break;
                            case 1: printf("\u2665"); break;
                            case 2: printf("\u2666"); break;
                            case 3: printf("\u2663"); break;
                        }
                        point=card[current]%13+1;
                        printf("%c,You ", POINT[point-1]);
                     
                        if(((cmd=='b')&&(point >= 7))||((cmd=='s')&&(point<=7)))
                        {
                            printf("win!\n");
                            money+=bet;    
                        }
                        else
                        {
                            printf("lose!\n");
                            money-=bet;
                            if(money<100)
                                quit=true;
                        }    
                        current++;
                        break;
            
            
        }

/*
        for(i=0;i<52;i++)
        {
            suit=card[i]/13;        
            point=card[i]%13+1;
        
            switch(suit)
            {
                case 0: printf("\u2660"); break;
                case 1: printf("\u2665"); break;
                case 2: printf("\u2666"); break;
                case 3: printf("\u2663"); break;
            }
            switch(point)
            {
                case 1:  printf("A"); break;
                case 10: printf("T"); break;
                case 11: printf("J"); break;
                case 12: printf("Q"); break;
                case 13: printf("K"); break;
                default: printf("%d", point);
            }
            printf(" ");
        
            if(i%13==12)
                printf("\n");
        }
 */   
    }
    printf("Good Bye!\n");
        
}
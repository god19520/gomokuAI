#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"head.h"
#include"check.h"
#include"attack.h"
#include"defense.h"
#include"Weights.h"
#include"weights.h"
 
int main(int argc, char *argv[])
{  
    if( strcmp(argv[1],"Black")==0)  //敵我判定
    {
        myself=Black;
        enemy=White;
    }
    else
    {
        myself=White;
        enemy=Black;
    }


    srand( (unsigned long) &quit  );

    for(i=0;i<19;i++)       //讀入棋盤
    {
        for(j=0;j<19;j++)
        {
            scanf(" %c", &chess[i][j]);
        }
    }
    /*if(chess[9][10]=='.')    //開局起手
    {
       printf("K, 10\n");
       found=true;
    }
    else if(chess[10][8]=='.')
    {
       printf("I, 11\n");
       found=true;
    }*/

    if(myself==Black)
    {
      if(chess[9][9]=='.')    //開局起手
      {
         printf("J, 10\n");
         found=true;
      }
      else if(chess[10][7]=='.')
      {
         printf("H, 11\n");
         found=true;
      }
    atk4(i,j);
    atkjp5(i,j); 
    def4(i,j);
    defjp5(i,j);           
    atk44(i,j); 
    watk1(i,j);   
    atk3(i,j);
    def3a(i,j);
    wdef1(i,j);
    defjp4(i,j);
    def3(i,j);
    wdef(i,j);
    watk(i,j);  
    atkjp4(i,j);
    atk2(i,j);
    atk22(i,j);
    atkb22(i,j);
    atk1(i,j);
    }
    else
    {
      if(chess[9][10]=='.')    //開局起手
      {
         printf("K, 10\n");
         found=true;
      }
      else if(chess[10][8]=='.')
      {
         printf("I, 11\n");
         found=true;
      }
    atk4(i,j);
    atkjp5(i,j);
    def4(i,j);
    defjp5(i,j);
    atk44(i,j);
    watk1(i,j);
    atk3(i,j);
    def3a(i,j);
    wdef1(i,j);
    defjp4(i,j);
    def3(i,j);
    wdef(i,j);
    watk(i,j);
    atkjp4(i,j);
    atk2(i,j);
    atk22(i,j);
    atkb22(i,j);
    atk1(i,j);
    }
 
    if(!found)
    {
        do
        {
            x=rand()%19;   
            y=1+rand()%19; 

        } while( chess[y-1][x]!='.' );

        printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[x], y);
    }
}

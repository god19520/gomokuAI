#include <stdio.h>
#define num 50 

int main()
{
  float sum[num]={0.0};          //一到八次的成績總和
  int homework[num][9];          //50位學生，9筆資料
  float average[num][2];         //座號及平均分數
  int i,j,k;                     //for迴圈變數
  int temp;                      //排序用暫存
  int plagiarism[num]={0};       //抄襲次數
  int missing[num]={0};          //缺交次數                         
  float temp0,temp1;             //排序用暫存
  int x=0,y=0;                   //抄襲次數，缺交次數

    for(i=0;i<num;i++)                                            //取得資料及原始成績
    {
      scanf("%2d %d:%d:%d:%d:%d:%d:%d:%d",
             &homework[i][0],&homework[i][1],&homework[i][2],
             &homework[i][3],&homework[i][4],&homework[i][5],
             &homework[i][6],&homework[i][7],&homework[i][8] );
    }  
    for(i=0;i<num;i++)                                            //排序
    {
      for(j=1;j<8;j++)
      {
        for(k=1;k<8-i;k++)
        {
          if(homework[i][k]<homework[i][k+1])
          {
            temp=homework[i][k];
            homework[i][k]=homework[i][k+1];
            homework[i][k+1]=temp;
          }           
        }
      }
    }
   for(i=0;i<num;i++)                                             //計算成績
     {
       for(j=1;j<=8;j++)
       {
         if(homework[i][j]==-2)
           {
            plagiarism[i]++;
           }
         if(homework[i][j]==-1)
           {
            missing[i]++;
           }
         sum[i]+= (homework[i][j]>0? homework[i][j] : 0);
       }       
       average[i][0] = homework[i][0];
       average[i][1] = sum[i]/8;
       if(missing[i]>1)
         {
          average[i][1]=average[i][1]*0.8;
         }
       if(plagiarism[i]>0)
         {
          for(k=0;k<plagiarism[i];k++)
             {
              average[i][1]=average[i][1]-20;
             }
         }
       if(average[i][1]<0)
         {
          average[i][1]=0;
         }
     }
     
  for(i=0;i<num-1;i++)                                             //依平均成績由低而高進行排列
  {
    for(j=0;j<num-i-1;j++)
    {
      if(average[j][1]>average[j+1][1])
      {
        temp0 = average[j][0];
        temp1 = average[j][1];
        average[j][0]=average[j+1][0];
        average[j][1]=average[j+1][1];
        average[j+1][0]=temp0;
        average[j+1][1]=temp1;
      }
    }
  }

  printf("No.\tScore\n");                                           //輸出結果
  for(i=0;i<num;i++)
  {
    printf("%2d\t%6.2f\n", (int)average[i][0],average[i][1] );
  }
}

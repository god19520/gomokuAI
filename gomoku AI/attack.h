void atkjp5(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
            if((!found)&&checkjpTd(i,j,5, myself)) //斜下5跳子下子
            {

                if(chess[i+1][j+1]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+2);
                    found=true;
                }
                else if(chess[i+2][j+2]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+3);
                    found=true;
                }
                else if(chess[i+3][j+3]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i+4);
                    found=true;
                }
            }
            if((!found)&&checkjpHor(i,j,5, myself)) //橫排5跳子下子
            {

                if(chess[i][j+1]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+1);
                    found=true;
                }
                else if(chess[i][j+2]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+1);
                    found=true;
                }
                else if(chess[i][j+3]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i+1);
                    found=true;
                }
            }
            if((!found)&&checkjpStr(i,j,5, myself)) //直排5跳子下子
            {

                if(chess[i+1][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+2);
                    found=true;
                }
                else if(chess[i+2][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+3);
                    found=true;
                }
                else if(chess[i+3][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+4);
                    found=true;
                }
            }
            if((!found)&&checkjpTu(i,j,5, myself)) //斜上5跳子下子
            {
                if(chess[i-1][j+1]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i);
                    found=true;
                }
                else if(chess[i-2][j+2]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                    found=true;
                }
                else if(chess[i-3][j+3]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i-2);
                    found=true;
                }
            }
      }
   }
}
void atkjp4(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
            if((!found)&&checkjpTd(i,j,4, myself)) //斜下4跳子下子
            {

                if(chess[i+1][j+1]=='.'&&(chess[i-1][j-1]=='.'||chess[i+4][j+4]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+2);
                    found=true;
                }
                else if(chess[i+2][j+2]=='.'&&(chess[i-1][j-1]=='.'||chess[i+4][j+4]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+3);
                    found=true;
                }
            }
            if((!found)&&checkjpHor(i,j,4, myself)) //橫排4跳子下子
            {

                if(chess[i][j+1]=='.'&&(chess[i][j-1]=='.'||chess[i][j+4]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+1);
                    found=true;
                }
                else if(chess[i][j+2]=='.'&&(chess[i][j-1]=='.'||chess[i][j+4]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+1);
                    found=true;
                }
            }
            if((!found)&&checkjpStr(i,j,4, myself)) //直排4跳子下子
            {

                if(chess[i+1][j]=='.'&&(chess[i-1][j]=='.'||chess[i+4][j]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+2);
                    found=true;
                }
                else if(chess[i+2][j]=='.'&&(chess[i-1][j]=='.'||chess[i+4][j]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+3);
                    found=true;
                }
            }
            if((!found)&&checkjpTu(i,j,4, myself)) //斜上4跳子下子
            {

                if(chess[i-2][j+2]=='.'&&(chess[i-4][j+4]=='.'||chess[i+1][j-1]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                    found=true;
                }
                else if(chess[i-1][j+1]=='.'&&(chess[i-4][j+4]=='.'||chess[i+1][j-1]=='.'))
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i);
                    found=true;
                }
            }
      }
  }
}

void atk4(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
            if((!found)&&check4NinTu(i,j,4, myself)) //斜上4下子
            {

                if(chess[i-4][j+4]=='.'&&j+4<19)
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+4],i-3);
                    found=true;
                }
                else if(chess[i+1][j-1]=='.'&&j>0)
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+2);
                    found=true;
                }
            }
            if((!found)&&check4NinTd(i,j,4, myself)) //斜下4下子
            {

                if(chess[i-1][j-1]=='.'&&j>0)
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i);
                    found=true;
                }
                else if(chess[i+4][j+4]=='.'&&j+4<19)
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+4],i+5);
                    found=true;
                }
            }
            if((!found)&&checkHorizontal(i,j,4, myself)) //橫排4下子
            {

                if(chess[i][j-1]=='.'&&j>0)
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+1);
                    found=true;
                }
                else if(chess[i][j+4]=='.'&&j+4<19)
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+4],i+1);
                    found=true;
                }
            }
            if((!found)&&checkStraight(i,j,4, myself)) //直排4下子
            {

                if(chess[i-1][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i);
                    found=true;
                }
                else if(chess[i+4][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+5);
                    found=true;
                }
            }
      } 
  }
}
void atkb22(int i,int j )
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&checkStr44(i,j,5, myself)) //直排大斷2下子
          {
              if(chess[i][j]=='.'&&chess[i+2][j]=='.'&&chess[i+3][j]=='.'&&chess[i+5][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+3);
                  found=true;
              }
          }
          if((!found)&&checkHor44(i,j,5, myself)) //橫排大斷2下子
          {
              if(chess[i][j]=='.'&&chess[i][j+2]=='.'&&chess[i][j+3]=='.'&&chess[i][j+5]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+1);
                  found=true;
              }

          }
          if((!found)&&checkTd44(i,j,5, myself)) //斜下大斷2下子
          { 
              if(chess[i][j]=='.'&&chess[i+2][j+2]=='.'&&chess[i+3][j+3]=='.'&&chess[i+5][j+5]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+3);
                  found=true;
              }
          }
          if((!found)&&checkTu44(i,j,5, myself)) //斜上大斷2下子
          {
              if(chess[i][j]=='.'&&chess[i-2][j+2]=='.'&&chess[i-3][j+3]=='.'&&chess[i-5][j+5]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                  found=true;
              }
          }
      }
  }
}

void atk22(int i,int j )
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&checkStr44(i,j,5, myself)) //直排斷2下子
          {

              if(chess[i][j]=='.'&&chess[i+2][j]=='.'&&chess[i+4][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+3);
                  found=true;
              }
          }
          if((!found)&&checkHor44(i,j,5, myself)) //橫排斷2下子
          {

              if(chess[i][j]=='.'&&chess[i][j+2]=='.'&&chess[i][j+4]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+1);
                  found=true;
              }
          }
          if((!found)&&checkTd44(i,j,5, myself)) //斜下斷2下子
          {

              if(chess[i][j]=='.'&&chess[i+2][j+2]=='.'&&chess[i+4][j+4]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+3);
                  found=true;
              }
          }
          if((!found)&&checkTu44(i,j,5, myself)) //斜上斷2下子
          {

              if(chess[i][j]=='.'&&chess[i-2][j+2]=='.'&&chess[i-4][j+4]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                  found=true;
              }
          }
      }
  }
}
 
void atk44(int i,int j )
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&checkStr44(i,j,7, myself)) //直排44禁手下子
          {

              if(chess[i+1][j]=='.'&&chess[i+3][j]=='.'&&chess[i+5][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+4);
                  found=true;
              }
          }
          if((!found)&&checkHor44(i,j,7, myself)) //橫排44禁手下子
          {

              if(chess[i][j+1]=='.'&&chess[i][j+3]=='.'&&chess[i][j+5]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i+1);
                  found=true;
              }
          }
          if((!found)&&checkTd44(i,j,7, myself)) //斜下44禁手下子
          {

              if(chess[i+1][j+1]=='.'&&chess[i+3][j+3]=='.'&&chess[i+5][j+5]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i+4);
                  found=true;
              }
          }
          if((!found)&&checkTu44(i,j,7, myself)) //斜上44禁手下子
          {

              if(chess[i-1][j+1]=='.'&&chess[i-3][j+3]=='.'&&chess[i-5][j+5]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i-2);
                  found=true;
              }
          }                 
      }
  }
}

void atk3(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&check4NinTu(i,j,3, myself)) //斜上3下子
           {
              if((chess[i-3][j+3]=='.'&&chess[i-4][j+4]=='.'&&j+4<19)&&(chess[i-3][j+3]=='.'&&chess[i+1][j-1]=='.'&&j+3<19&&j>0))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i-2);
                  found=true;
              }
              else if((chess[i+1][j-1]=='.'&&chess[i+2][j-2]=='.'&&j-1>0)&&(chess[i-3][j+3]=='.'&&chess[i+1][j-1]=='.'&&j+3<19&&j>0))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+2);
                  found=true;
              }
          }
          if((!found)&&check4NinTd(i,j,3, myself)) //斜下3下子
          {
              if((chess[i-1][j-1]=='.'&&chess[i-2][j-2]=='.'&&j-1>0)&&(chess[i-1][j-1]=='.'&&chess[i+3][j+3]=='.'&&j+3<19&&j>0))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i);
                  found=true;
              }
              else if((chess[i+3][j+3]=='.'&&chess[i+4][j+4]=='.'&&j+4<19)&&(chess[i-1][j-1]=='.'&&chess[i+3][j+3]=='.'&&j+3<19&&j>0))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i+4);
                  found=true;
              }
        }
        if((!found)&&checkHorizontal(i,j,3, myself)) //橫排3下子
        {

           if((chess[i][j-1]=='.'&&chess[i][j-2]=='.'&&j-1>0)&&(chess[i][j-1]=='.'&&chess[i][j+3]=='.'&&j+3<19&&j>0))
           {
               printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+1);
               found=true;
           }
           else if((chess[i][j+3]=='.'&&chess[i][j+4]=='.'&&j+4<19)&&(chess[i][j-1]=='.'&&chess[i][j+3]=='.'&&j+3<19&&j>0))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i+1);
                  found=true;
              }
          }
          if((!found)&&checkStraight(i,j,3, myself)) //直排3下子
          {

              if((chess[i-1][j]=='.'&&chess[i-2][j]=='.')&&(chess[i-1][j]=='.'&&chess[i+3][j]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i);
                  found=true;
              }
              else if((chess[i+3][j]=='.'&&chess[i+4][j]=='.')&&(chess[i-1][j]=='.'&&chess[i+3][j]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+4);
                  found=true;
              }
          }
      }
  }
}
void atk2(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&check4NinTu(i,j,2, myself)) //斜上2下子
          {
              if(chess[i-2][j+2]=='.'&&chess[i+1][j-1]=='.'&&chess[i-3][j+3]=='.'&&j+3<19&&j>0)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                  found=true;
              }
              else if(chess[i-2][j+2]=='.'&&chess[i+1][j-1]=='.'&&chess[i+2][j-2]=='.'&&j+2<19&&j-1>0)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+2);
                  found=true;
              }
          }
          if((!found)&&check4NinTd(i,j,2, myself)) //斜下2下子
          {
              if(chess[i-1][j-1]=='.'&&chess[i+2][j+2]=='.'&&chess[i-2][j-2]=='.'&&j+2<19&&j-1>0)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i);
                  found=true;
              }
              else if(chess[i-1][j-1]=='.'&&chess[i+2][j+2]=='.'&&chess[i+3][j+3]=='.'&&j+3<19&&j>0)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+3);
                  found=true;
              }

          }
          if((!found)&&checkHorizontal(i,j,2, myself)) //橫排2下子
          {
              if(chess[i][j+2]=='.'&&chess[i][j-1]=='.'&&chess[i][j+3]=='.'&&j+3<19&&j>0)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+1);
                  found=true;
              }
              else if(chess[i][j+2]=='.'&&chess[i][j-1]=='.'&&chess[i][j-2]=='.'&&j+2<19&&j-1>0)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+1);
                  found=true;
              }
          }
          if((!found)&&checkStraight(i,j,2, myself)) //直排2下子
          {
              if(chess[i-1][j]=='.'&&chess[i+2][j]=='.'&&chess[i-2][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i);
                  found=true;
              }
              else if(chess[i-1][j]=='.'&&chess[i+2][j]=='.'&&chess[i+3][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+3);
                  found=true;
              }
          }
      }
  }
}
void atk1(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&check4NinTu(i,j,1, myself)) //斜上1下子
           {
              if((chess[i-1][j+1]=='.'&&chess[i-2][j+2]=='.')&&(chess[i-1][j+1]=='.'&&chess[i+1][j-1]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i);
                  found=true;
              }
              else if((chess[i+1][j-1]=='.'&&chess[i+2][j-2]=='.')&&(chess[i-1][j+1]=='.'&&chess[i+1][j-1]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+2);
                  found=true;
              }
          }
          if((!found)&&check4NinTd(i,j,1, myself)) //斜下1下子
          {
              if((chess[i-1][j-1]=='.'&&chess[i-2][j-3]=='.')&&(chess[i-1][j-1]=='.'&&chess[i+1][j+1]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i);
                  found=true;
              }
              else if((chess[i+1][j+1]=='.'&&chess[i+2][j+2]=='.')&&(chess[i-1][j-1]=='.'&&chess[i+1][j+1]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+2);
                  found=true;
              }
          }
          if((!found)&&checkHorizontal(i,j,1, myself)) //橫排1下子
          {

              if((chess[i][j-1]=='.'&&chess[i][j-2]=='.')&&(chess[i][j-1]=='.'&&chess[i][j+1]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+1);
                  found=true;
              }
              else if((chess[i][j+1]=='.'&&chess[i][j+2]=='.')&&(chess[i][j-1]=='.'&&chess[i][j+1]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+1);
                  found=true;
              }
          }
          if((!found)&&checkStraight(i,j,1, myself)) //直排1下子
          {

              if((chess[i-1][j]=='.'&&chess[i-2][j]=='.')&&(chess[i-1][j]=='.'&&chess[i+1][j]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i);
                  found=true;
              }
              else if((chess[i+1][j]=='.'&&chess[i+2][j]=='.')&&(chess[i-1][j]=='.'&&chess[i+1][j]=='.'))
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+2);
                  found=true;
              }
          }
      }
  }
}


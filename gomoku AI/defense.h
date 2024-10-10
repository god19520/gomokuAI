void defjp5(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
            if((!found)&&checkjpTd(i,j,5, enemy)) //斜下5跳子下子
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
            if((!found)&&checkjpHor(i,j,5, enemy)) //橫排5跳子下子
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
            if((!found)&&checkjpStr(i,j,5, enemy)) //直排5跳子下子
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
            if((!found)&&checkjpTu(i,j,5, enemy)) //斜上5跳子下子
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

void defjp4(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
            if((!found)&&checkjpTd(i,j,4, enemy)) //斜下跳子4阻擋
            {
                if(chess[i+1][j+1]=='.'&&chess[i-1][j-1]=='.'&&chess[i+4][j+4]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+2);
                    found=true;
                }
                else if(chess[i+2][j+2]=='.'&&chess[i-1][j-1]=='.'&&chess[i+4][j+4]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+3);
                    found=true;
                }
            }
            if((!found)&&checkjpHor(i,j,4, enemy)) //橫排4跳子阻擋
            {

                if(chess[i][j+1]=='.'&&chess[i][j-1]=='.'&&chess[i][j+4]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i+1);
                    found=true;
                }
                else if(chess[i][j+2]=='.'&&chess[i][j-1]=='.'&&chess[i][j+4]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i+1);
                    found=true;
                }
            }
            if((!found)&&checkjpStr(i,j,4, enemy)) //直排4跳子阻擋
            {
                if(chess[i+1][j]=='.'&&chess[i-1][j]=='.'&&chess[i+4][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+2);
                    found=true;
                }
                else if(chess[i+2][j]=='.'&&chess[i-1][j]=='.'&&chess[i+4][j]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+3);
                    found=true;
                }
            }
            if((!found)&&checkjpTu(i,j,4, enemy)) //斜上4跳子阻擋
            {
                if(chess[i-2][j+2]=='.'&&chess[i-4][j+4]=='.'&&chess[i+1][j-1]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                    found=true;
                }
                else if(chess[i-1][j+1]=='.'&&chess[i-4][j+4]=='.'&&chess[i+1][j-1]=='.')
                {
                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+1],i);
                    found=true;
                }
            }
      }
  }
}

void def4(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
            if((!found)&&checkHorizontal(i,j,4, enemy)) //橫排4阻擋
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
            if((!found)&&checkStraight(i,j,4, enemy)) //直排4阻擋
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
            if((!found)&&check4NinTd(i,j,4, enemy)) //斜下4阻擋
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
            if((!found)&&check4NinTu(i,j,4, enemy)) //斜上4阻擋
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
      }
  }
}
void def3a(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&check4NinTu(i,j,3, enemy)) //
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
          if((!found)&&check4NinTd(i,j,3, enemy)) //
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
        if((!found)&&checkHorizontal(i,j,3, enemy)) //
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
          if((!found)&&checkStraight(i,j,3, enemy)) //
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


void def3(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
         if((!found)&&check4NinTu(i,j,3, enemy)) //斜上3阻擋
         {
             if(chess[i-3][j+3]=='.'&& chess[i+1][j-1]=='.'&&j>0&&j+3<19)
             {
                printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+3],i-2);
                found=true;
             }
         }
          if((!found)&&checkHorizontal(i,j,3, enemy)) //橫排3阻擋
          {

              if(chess[i][j-1]=='.'&& chess[i][j+3]=='.'&&j>0&&j+3<19)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+1);
                  found=true;
              }
          }
          if((!found)&&checkStraight(i,j,3, enemy)) //直排3阻擋
          {

              if(chess[i-1][j]=='.'&&chess[i+3][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i);
                  found=true;
              }
          }
          if((!found)&&check4NinTd(i,j,3, enemy)) //斜下3阻擋
          {
              if(chess[i-1][j-1]=='.'&&chess[i+3][j+3]=='.'&&j>0&&j+3<19)
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i);
                  found=true;
              }
          }
      }
  }
}
void def2(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
         if((!found)&&check4NinTu(i,j,2, enemy)) //斜上2阻擋
         {
             if(chess[i-2][j+2]=='.'&& chess[i+1][j-1]=='.')
             {
                printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j+2],i-1);
                found=true;
             }
         }
          if((!found)&&checkHorizontal(i,j,2, enemy)) //橫排2阻擋
          {

              if(chess[i][j-1]=='.'&& chess[i][j+2]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i+1);
                  found=true;
              }
          }
          if((!found)&&checkStraight(i,j,2, enemy)) //直排2阻擋
          {

              if(chess[i-1][j]=='.'&&chess[i+2][j]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i);
                  found=true;
              }
          }
          if((!found)&&check4NinTd(i,j,2, enemy)) //斜下2阻擋
          {
              if(chess[i-1][j-1]=='.'&&chess[i+2][j+2]=='.')
              {
                  printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j-1],i);
                  found=true;
              }
          }
      }
  }
}


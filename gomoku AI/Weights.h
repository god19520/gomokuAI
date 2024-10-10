void watk3(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
         if((!found)&&check4NinTu(i,j,3, myself)) //斜上3權重
         {
             if(chess[i-3][j+3]=='.'&& chess[i-4][j+4]=='.'&&j+4<19)
             {
                aweight[i-3][j+3]=aweight[i-3][j+3]+3;  
                aweight[i-4][j+4]=aweight[i-4][j+4]+3;             
             }
             if(chess[i+1][j-1]=='.'&& chess[i+2][j-2]=='.'&&j-1>0)
             {
                aweight[i+1][j-1]=aweight[i+1][j-1]+3;
                aweight[i+2][j-2]=aweight[i+2][j-2]+3;                
             }
         }
          if((!found)&&checkHorizontal(i,j,3,  myself)) //橫排3權重
          {
              if(chess[i][j-1]=='.'&& chess[i][j-2]=='.'&&j-1>0)
              {
                aweight[i][j-1]=aweight[i][j-1]+3;
                aweight[i][j-2]=aweight[i][j-2]+3;                  
              }
              if(chess[i][j+3]=='.'&& chess[i][j+4]=='.'&&j+4<19)
              {
                aweight[i][j+3]=aweight[i][j+3]+3;
                aweight[i][j+4]=aweight[i][j+4]+3;                  
              }

          }
          if((!found)&&checkStraight(i,j,3,  myself)) //直排3權重
          {
              if(chess[i-1][j]=='.'&&chess[i-2][j]=='.')
              {
                aweight[i-1][j]=aweight[i-1][j]+3;
                aweight[i-2][j]=aweight[i-2][j]+3;
              }
              if(chess[i+3][j]=='.'&&chess[i+4][j]=='.')
              {
                aweight[i+3][j]=aweight[i+3][j]+3;
                aweight[i+4][j]=aweight[i+4][j]+3;
              }
          }
          if((!found)&&check4NinTd(i,j,3,  myself)) //斜下3權重
          {
              if(chess[i-1][j-1]=='.'&&chess[i-2][j-2]=='.'&&j-1>0)
              {
                aweight[i-1][j-1]=aweight[i-1][j-1]+3;
                aweight[i-2][j-2]=aweight[i-2][j-2]+3;                  
              }
              if(chess[i+3][j+3]=='.'&&chess[i+4][j+4]=='.'&&j+4<19)
              {
                aweight[i+3][j+3]=aweight[i+3][j+3]+3;
                aweight[i+4][j+4]=aweight[i+4][j+4]+3;                  
              }
          }
      }
  }
}
void watk2(int i,int j)
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&check4NinTu(i,j,2,  myself)) //斜上2權重
          {
              if(chess[i-2][j+2]=='.'&&chess[i-3][j+3]=='.'&&chess[i+1][j-1]=='.')
              {
                 aweight[i-2][j+2]=aweight[i-2][j+2]+2;
                 aweight[i-3][j+3]=aweight[i-3][j+3]+2;     
              }
              if(chess[i+1][j-1]=='.'&&chess[i+2][j-2]=='.'&&chess[i-2][j+2]=='.')
              {
                 aweight[i+1][j-1]=aweight[i+1][j-1]+2;
                 aweight[i+2][j-2]=aweight[i+2][j-2]+2;                  
              }
          }
          if((!found)&&check4NinTd(i,j,2,  myself)) //斜下2權重
          {
              if(chess[i-1][j-1]=='.'&&chess[i-2][j-2]=='.'&&chess[i+2][j+2]=='.')
              {
                 aweight[i-1][j-1]=aweight[i-1][j-1]+2;
                 aweight[i-2][j-2]=aweight[i-2][j-2]+2;                
              }
              if(chess[i-1][j-1]=='.'&&chess[i+2][j+2]=='.'&&chess[i+3][j+3]=='.')
              {
                 aweight[i+2][j+2]=aweight[i+2][j+2]+2;
                 aweight[i+3][j+3]=aweight[i+3][j+3]+2;                  
              }

          }
          if((!found)&&checkHorizontal(i,j,2,  myself)) //橫排2權重
          {
              if(chess[i][j+2]=='.'&&chess[i][j+3]=='.'&&chess[i][j-1]=='.')
              {
                 aweight[i][j+2]=aweight[i][j+2]+2;
                 aweight[i][j+3]=aweight[i][j+3]+2;                  
              }
              if(chess[i][j+2]=='.'&&chess[i][j-1]=='.'&&chess[i][j-2]=='.')
              {
                 aweight[i][j-1]=aweight[i][j-1]+2;
                 aweight[i][j-2]=aweight[i][j-2]+2;                 
              }
          }
          if((!found)&&checkStraight(i,j,2,  myself)) //直排2權重
          {
              if(chess[i-1][j]=='.'&&chess[i-2][j]=='.'&&chess[i+2][j]=='.')
              {
                 aweight[i-1][j]=aweight[i-1][j]+2;
                 aweight[i-2][j]=aweight[i-2][j]+2;                 
              }
              if(chess[i-1][j]=='.'&&chess[i+2][j]=='.'&&chess[i+3][j]=='.')
              {
                 aweight[i+2][j]=aweight[i+2][j]+2;
                 aweight[i+3][j]=aweight[i+3][j]+2;                  
              }
          }
      }
  }
}
void watkb22(int i,int j )
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&checkStr44(i,j,5,  myself)) //直排大斷2權重
          {
              if(chess[i][j]=='.'&&chess[i+2][j]=='.'&&chess[i+3][j]=='.'&&chess[i+5][j]=='.')
              {
                 aweight[i+2][j]=aweight[i+2][j]+2;
                 aweight[i+3][j]=aweight[i+3][j]+2;
              }
          }
          if((!found)&&checkHor44(i,j,5,  myself)) //橫排大斷2權重
          {
              if(chess[i][j]=='.'&&chess[i][j+2]=='.'&&chess[i][j+3]=='.'&&chess[i][j+5]=='.')
              {
                 aweight[i][j+2]=aweight[i][j+2]+2;
                 aweight[i][j+3]=aweight[i][j+3]+2;                                
              }
          }
          if((!found)&&checkTd44(i,j,5,  myself)) //斜下大斷2權重
          { 
              if(chess[i][j]=='.'&&chess[i+2][j+2]=='.'&&chess[i+3][j+3]=='.'&&chess[i+5][j+5]=='.')
              {
                 aweight[i+2][j+2]=aweight[i+2][j+2]+2;
                 aweight[i+3][j+3]=aweight[i+3][j+3]+2;                 
              }
          }
          if((!found)&&checkTu44(i,j,5,  myself)) //斜上大斷2權重
          {
              if(chess[i][j]=='.'&&chess[i-2][j+2]=='.'&&chess[i-3][j+3]=='.'&&chess[i-5][j+5]=='.')
              {
                 aweight[i-2][j+2]=aweight[i-2][j+2]+2;
                 aweight[i-3][j+3]=aweight[i-3][j+3]+2;                 
              }
          }
      }
  }
}

void watk22(int i,int j )
{
  for(i=0;i<19;i++)
  {
      for(j=0;j<19;j++)
      {
          if((!found)&&checkStr44(i,j,5,  myself)) //直排斷2權重
          {

              if(chess[i][j]=='.'&&chess[i+2][j]=='.'&&chess[i+4][j]=='.')
              {
                 aweight[i][j]=aweight[i][j]+2;
                 aweight[i+2][j]=aweight[i+2][j]+2;
                 aweight[i+4][j]=aweight[i+4][j]+2;                  
              }
          }
          if((!found)&&checkHor44(i,j,5,  myself)) //橫排斷2權重
          {

              if(chess[i][j]=='.'&&chess[i][j+2]=='.'&&chess[i][j+4]=='.')
              {
                 aweight[i][j]=aweight[i][j]+2;
                 aweight[i][j+2]=aweight[i][j+2]+2;
                 aweight[i][j+4]=aweight[i][j+4]+2;                 
              }
          }
          if((!found)&&checkTd44(i,j,5,  myself)) //斜下斷2權重
          {

              if(chess[i][j]=='.'&&chess[i+2][j+2]=='.'&&chess[i+4][j+4]=='.')
              {
                 aweight[i][j]=aweight[i][j]+2;
                 aweight[i+2][j+2]=aweight[i+2][j+2]+2;
                 aweight[i+4][j+4]=aweight[i+4][j+4]+2;                 
              }
          }
          if((!found)&&checkTu44(i,j,5,  myself)) //斜上斷2權重
          {

              if(chess[i][j]=='.'&&chess[i-2][j+2]=='.'&&chess[i-4][j+4]=='.')
              {
                 aweight[i][j]=aweight[i][j]+2;
                 aweight[i-2][j+2]=aweight[i-2][j+2]+2;
                 aweight[i-4][j+4]=aweight[i-4][j+4]+2;                  
              }
          }
      }
  }
}

void watk1(int i,int j)
{
    watk3(i,j);
    watk2(i,j);
    watk22(i,j);
    watkb22(i,j);
    for(i=0;i<19;i++)
    {
        for(j=0;j<19;j++)
        {
          if(aweight[i][j]>max1)
          {
            max1=aweight[i][j];
          }   
        }        
    }
    if(max1>4)
    {
      for(i=0;i<19;i++)
      { 
          for(j=0;j<19;j++)
          {
            if(!found&&aweight[i][j]>=max1)
            {
               printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+1);
               found=true;
            }
          }
      }
    }
}
void watk(int i,int j)
{
    for(i=0;i<19;i++)
    {
        for(j=0;j<19;j++)
        {
          if(aweight[i][j]>max1)
          {
            max1=aweight[i][j];
          }   
        }        
    }
    if(max1>3)
    {
      for(i=0;i<19;i++)
      { 
          for(j=0;j<19;j++)
          {
            if(!found&&aweight[i][j]>=max1)
            {
               printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j],i+1);
               found=true;
            }
          }
      }
    }

}


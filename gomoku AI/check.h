
boolean checkHorizontal(int i, int j, int N, Player player) //橫排檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i][j+x]==player)
                count++;
        }
        if(count==N)
            return true;
        else
            return false;
    }

    return false;
}

boolean checkStraight(int i, int j, int N, Player player) //直排檢查
{
    int count=0;
    int x;

    if(i<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i+x][j]==player)
                count++;
        }
        if(count==N)
            return true;
        else
            return false;
    }

    return false;
}

boolean check4NinTd(int i, int j, int N, Player player) //斜下檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i+x][j+x]==player)
                count++;
        }
        if(count==N)
            return true;
        else
            return false;
    }

    return false;
}

boolean check4NinTu(int i, int j, int N, Player player) //斜上檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i-x][j+x]==player)
                count++;
        }
        if(count==N)
            return true;
        else
            return false;
    }

    return false;
}

boolean checkjpTd(int i, int j, int N, Player player) //斜下跳子檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i+x][j+x]==player)
                count++;
        }
        if(count==N-1)
            return true;
        else
            return false;
    }

    return false;
}

boolean checkjpTu(int i, int j, int N, Player player) //斜上跳子檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i-x][j+x]==player)
                count++;
        }
        if(count==N-1)
            return true;
        else
            return false;
    }

    return false;
}

boolean checkjpStr(int i, int j, int N, Player player) //直排跳子檢查
{
    int count=0;
    int x;

    if(i<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i+x][j]==player)
                count++;
        }
        if(count==N-1)
            return true;
        else
            return false;
    }

    return false;
}

boolean checkjpHor(int i, int j, int N, Player player) //橫排跳子檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i][j+x]==player)
                count++;
        }
        if(count==N-1)
            return true;
        else
            return false;
    }

    return false;
}
boolean checkStr44(int i, int j, int N, Player player) //直排44禁手檢查
{
    int count=0;
    int x;

    if(i<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i+x][j]==player)
                count++;
        }
        if(count==N-3)
            return true;
        else
            return false;
    }
    return false;
}
boolean checkHor44(int i, int j, int N, Player player) //橫排44禁手檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i][j+x]==player)
                count++;
        }
        if(count==N-3)
            return true;
        else
            return false;
    }

    return false;
}

boolean checkTd44(int i, int j, int N, Player player) //斜下44禁手檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i+x][j+x]==player)
                count++;
        }
        if(count==N-3)
            return true;
        else
            return false;
    }

    return false;
}
boolean checkTu44(int i, int j, int N, Player player) //斜上44禁手檢查
{
    int count=0;
    int x;

    if(j<=(19-N))
    {
        for(x=0;x<N;x++)
        {
            if(chess[i-x][j+x]==player)
                count++;
        }
        if(count==N-3)
            return true;
        else
            return false;
    }

    return false;
}


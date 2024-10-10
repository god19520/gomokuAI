int adjustPrice(int x)
{
 if(x>10)
 {
   x=x/10*10;
 }
 else
 {
   return x;
 } 
}
int adjustPrice(double y)
{
  if(y<=10)
  {
    return int(y);
  }
  else
  {
    int a;
    a=y;
    a=a/10*10;
    return a; 
  }
}

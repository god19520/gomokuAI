int max(int &number[10])
{
   int i;
   int a=0;
   for(i=0;i<10;i++)
   {
     if(a<number[i])
     {
       a=number[i];
     }       
   }  
}

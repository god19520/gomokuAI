#include<iostream>

using namespace std;

bool bestbuy(string product[5],int price[5], string what2buy)
{
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4-i;j++)
    {
      if(price[j]>price[j+1])
      {
        int temp1 = price[j];
        price[j] = price[j+1];
        price[j+1] = temp1;
        string temp2 = product[j];
        product[j] = product[j+1];
        product[j+1] = temp2;
      }
    }
  }
  for(int i=0;i<5;i++)
  {
    if(product[i]== what2buy)
    {
      cout << what2buy <<": $"<< price[i]<<"."<<endl;
      if(i<4)
      {
        cout << "You can also consider "<< product[i+1] <<": $"<<price[i+1]<<"."<<endl;
        return true;
      }      
    }
  }
}

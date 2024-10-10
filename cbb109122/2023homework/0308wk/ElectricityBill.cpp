#include <iostream>

using namespace std;

int main()
{
  int kwh,month;
  double ans;
  cout << "Energy Consumption (kWh): ";
  cin >> kwh;
  cout << "Month: ";
  cin >> month;
  if(6>=month && month<=9)
  {
   if(kwh<=120)
   {
     ans=1.63*kwh;
   }
   else if(kwh>120 && kwh<=330)
   {
    ans=(120*1.63)+(2.38*(kwh-210));
   }
   else if(kwh>330 && kwh<=500)
   {    
    ans=(120*1.63)+(2.38*210)+(3.52*(kwh-330));
   }
   else if(kwh>500 && kwh<=700)
   {
    ans=(120*1.63)+(2.38*210)+(3.52*170)+(4.80*(kwh-500));
   }
   else if(kwh>700 && kwh<=1000)
   {
    ans=(120*1.63)+(2.38*210)+(3.52*170)+(4.80*200)+(5.66*(kwh-700));
   }
   else
   {
    ans=(120*1.63)+(2.38*210)+(3.52*170)+(4.80*200)+(5.66*300)+(6.41*(kwh-1000));
   }
  }
  else
  {
   if(kwh<=120)
   {
     ans=1.63*kwh;
   }
   else if(kwh>120 && kwh<=330)
   {
    ans=(120*1.63)+(2.10*(kwh-120));
   }
   else if(kwh>330 && kwh<=500)
   {
    ans=(120*1.63)+(2.10*210)+(2.89*(kwh-330));
   }
   else if(kwh>500 && kwh<=700)
   {
    ans=(120*1.63)+(2.10*210)+(2.89*170)+(3.94*(kwh-500));
   }
   else if(kwh>700 && kwh<=1000)
   {
    ans=(120*1.63)+(2.10*210)+(2.89*170)+(3.94*200)+(4.60*(kwh-700));
   }
   else
   {
    ans=(120*1.63)+(2.10*210)+(2.89*170)+(3.94*200)+(4.60*300)+(5.03*(kwh-1000));
   }
  }
  cout << "Electricity Bill = NT$ "<< ans <<"."<<endl;
}


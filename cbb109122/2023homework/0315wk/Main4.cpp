#include <iostream>
using namespace std;

bool bestbuy(string product[], int price[], string what2buy);

int main()
{
    string mac[5]={"MacBook Air", "MacBook Pro",
                   "iMac", "Mac Mini", "Mac Pro"};
    int price[5]= { 30900, 39800, 39900, 18900, 59900};
    string what2buy;
    bool found=false;

    cout << "What product are you looking for? ";
    getline(cin, what2buy);

    found=bestbuy(mac, price, what2buy);

    if(!found)
    {
        cout << "Not Found!" << endl;
    }
}

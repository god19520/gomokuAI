#include <iostream>
using namespace std;
#include "AdjustPrice.h"

int main()
{
    int x;
    double y;

    cin >> x;
    cin >> y;
    cout << adjustPrice(x) << endl;
    cout << adjustPrice(y) << endl;
}

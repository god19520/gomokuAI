#include <iostream>
using namespace std;
#include "MaxData.h"

int main()
{
    int data[10];
    getData(data);
    cout << max(data, 3) << endl;
    cout << max(data, 5) << endl;
    cout << max(data) << endl;
}

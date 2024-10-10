#include <iostream>
#include <algorithm>
#include <string>

using std::cout; using std::string;
using std::endl; using std::cin;
using std::transform; using std::toupper;

string capitalizeString(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); });
    return s;
}

int main() {
    string string1("hello there είναι απλά ένα κείμενο χωρίς");
    cout << "input  string: " << string1 << endl
         <<  "output string: " << capitalizeString(string1) << endl << endl;

    return 0;
}

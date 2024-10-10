#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
string str, str_rv;
cout << "Please input a string (up to 255 characters): " ;
getline (cin, str);

str.erase ( remove_if (str.begin(), str.end(), ::ispunct), str.end());  
str.erase ( remove_if(str.begin(), str.end(), ::isspace), str.end()); 
for (int i=0;i<str.length(); i++) 
{ 
str[i] = toupper (str[i]);
}
str_rv = str;
reverse (str_rv.begin(), str_rv.end()); 
if (str.compare (str_rv) == 0) 
{
cout << "Yes, this is a palindrome." << endl;
}
else
{
cout << "No, this is not a palindrome." << endl;
}
}

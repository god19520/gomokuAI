#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

int main()
{
int n;

cout << "How many strings do you want to input? ";
cin >> n;
cin.get();
char **str = new char *[n];

for (int i=0;i<n;i++)
{
str[i] = new char [21];
}
for (int i=0; i<n; i++)
{
cout << "Input " << i+1 <<": ";
cin.getline (str[i], 21);
}
for (int i=0; i<n; i++)
{
  for (int j=0; j<21; j++)
  {
  str[i][j] = tolower (str[i][j]);
  }
} 
cout << endl << "Lexicographical ordering..." << endl <<endl;
for(int i=0; i<n; i++)
{
  for(int j=0; j<=n-i-1; j++)
  {
  if(strncmp(str[i],str[i+j], 21)>0)
  {
   char *temp = new char [21];
   strcpy (temp, str[i]);
   strcpy (str[i], str[i+j]);
   strcpy (str[i+j], temp);
   delete [] temp;
  }
  }
}
for (int i=0; i<n; i++)
{
cout << str[i] << endl;
}
delete [] str;
return 0;
}

#include <iostream>
using namespace std;
#include <string>
int main()
{
	cout << "What is your name?";
	cin >> string string1;

	cout << "I did not understand you. Please introduce yourself!";
	cin >> string string2;

int SIZE2 = string2.length();
int SIZE1 = string1.length();
for (int i = 0; i < (SIZE1 - SIZE2+1); i++)
{
if (string1.substr(i, string2.length()) == string2)
{
cout << "I found the substring starting at element " << i <<
" and ending at element " << i + string2.length()-1 << endl;
}
}
return 0;
}
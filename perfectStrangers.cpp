#include <iostream>
using namespace std;
#include <string>
string find_chars(string, string);

string string1;
string string2;

int main()
{	

	cin >> string1;

	
	cin >> string2; 
	
	string common = find_chars(string1, string2);
	cout << common << endl;
	return 0;
}

string find_chars(string string1, string string2)
{
	string common;
	for (int i = 0; i < string1.length(); i++)
	{
		char current = string1.at(i);
		for (int j = 0; j < string2.length(); j++)
		{
			if (current == string2.at(j))
		{
				common.push_back(current);
				break;
		}
	}
}
return common;
}
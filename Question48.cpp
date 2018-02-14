
#include <iostream>
using namespace std;


int main()
{
	const int SIZE = 7;
	int A[7] = { 2,3,3,6,2,8,1 };
	
	int Output[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		Output[i] = 1;
		for (int j = 0; j < SIZE; j++)
		{
			if (i != j)
			{
				Output[i] *= A[j];
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << Output[i] << endl;
	}
return 0;
}
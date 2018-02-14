#include <iostream>
using namespace std;
int distinct(int[], const int );
void BubbleSort(int[], int&);

int main()
{
	const int SIZE = 9;
	int x[] = { 1,3,2,7,8,8,6,9,10 };
	int newSize = distinct(x, SIZE);
	cout << "number of unique party attendees:" << newSize << endl;
	return 0;
}

int distinct(int x[], int mySize)
{
	BubbleSort(x, mySize);
	int current = x[0];
	int ndistinct = 1;
	for (int i = 1; i < mySize; i++)
	{
		if (x[i] != current)
	{
		current = x[i];
		ndistinct++;
	}
}
return ndistinct;
}

void BubbleSort(int a[], int &length)
{
	bool swap_flag = true;
	int temp;
	for (int i = 1; (i < length) && swap_flag; i++)
	{
		swap_flag = false;
		for (int j = 0; j < length - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swap_flag = true;
			}
		}
	}
}
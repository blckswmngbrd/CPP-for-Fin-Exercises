#include <iostream>
using namespace std;
#include <stdlib.h>

void BubbleSort(int[], int);
int main()
{
		const int SIZE = 10000;
		int randos[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			randos[i] = rand() % 20000 + 1;
		}
		BubbleSort(randos, SIZE);
		cout << "The largest number is " << randos[SIZE - 1] << endl;
		cout << "The smallest number is " << randos[0] << endl;
		cout << "The median number is " << (randos[SIZE / 2] + randos[SIZE / 2 + 1]) / 2.0 << endl;
		return 0;
}
void BubbleSort(int a[], int length)
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
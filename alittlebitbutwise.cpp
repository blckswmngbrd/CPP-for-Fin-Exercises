#include <iostream>
using namespace std;
int multiplication(int &, int&);

int main()
{
	int a;
	int b;
	cout << "Enter first integer: " << endl;
	cin >> a;
	cout << "Enter second integer: " << endl;
	cin >> b;
	cout << "The product without using * is: " << multiplication(a, b) << endl;
}

// use bitwise operators to multiply

int multiplication(int &x, int &y)
{
	int prod = 0;
// Make x the larger of the integers so that
// we do less loops in the while loop.
	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	while (y != 0)
	{
		if (y & 1)
		{
			prod += x;
		}
		x <<= 1; // Multiply x by 2
		y >>= 1; // Divide y by 2
	}
	return prod;
}
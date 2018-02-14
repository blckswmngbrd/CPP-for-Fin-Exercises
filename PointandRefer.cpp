#include <iostream>
#include <math.h>
using namespace std;

double futVal(double, double, double);
void futVal(double &, double &, double &, double &);
void futVal(double *, double *, double *, double *);

int main()
{
				double r;
				double PV;
				double T;
				double FV = 0.0;
				cout << "Enter the present value of the asset" << endl;
				cin >> PV;
				cout << "Enter the interest rate (as a decimal)" << endl;
				cin >> r;
				cout << "How many years?" << endl;
				cin >> T;
				//by value
				FV = futVal(PV, r, T);
				cout << "The future value calculated by pass by value is " << FV << endl;
				//by ref
				futVal(PV, r, T, FV);
				cout << "The future value calculated by pass by reference is " << FV << endl;
				//by ptr
				futVal(&PV, &r, &T, &FV);
				cout << "The future value calculated by pass by pointer is " << FV << endl;
		return 0;

}

// Pass by value
double futVal(double PV, double r, double T)
{
			return PV*pow(1 + r, T);
}
// pass by reference

void futVal(double &PV, double &r, double &T, double &FV)
{
			FV = PV*pow(1 + r, T);
}

//pass by pointer
void futVal(double *PV, double *r, double *T, double *FV)
{
			*FV = *PV *pow(1 + *r, *T);
}
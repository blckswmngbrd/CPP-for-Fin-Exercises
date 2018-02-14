#include <iostream>
using namespace std;
#include <vector>
#include <math.h>

int main()
{
	int totCalc;
	cout << "Enter the number of interest calculations you want" << endl;
	cin >> totCalc;
	vector<double> PV;
	vector<double> IR;
	vector<double> years;
	double pv;
	double ir;
	double y;
	for (int i = 0; i < totCalc; i++)
	{
			cout << "principal?" << endl;
			cin >> pv;
			PV.push_back(pv);
			cout << "interest rate?" << endl;
			cin >> ir;
			IR.push_back(ir);
			cout << "years?" << endl;
			cin >> y;
			years.push_back(y);
	}
	cout << "Simple" << "Compound" << "\t" << "Continuous" << endl;
	for (int i = 0; i < totCalc; i++)
	{
		cout << PV[i] * (1 + IR[i] * years[i]) <<
				"\t" <<
				PV[i] * pow(1 + IR[i], years[i]) << "\t" <<
				PV[i] * exp(IR[i] * years[i]) << endl;
	}
return 0;
}
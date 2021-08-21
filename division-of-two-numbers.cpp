#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	double div;
	int num1, num2;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "\nEnter 2nd number: ";
	cin >> num2;
	div = static_cast<double>(num1) / num2;
	cout << fixed<<setprecision(2)<<showpoint<<"\nDivision of : " << num1 << " by " << num2 << " is : " << div;
}
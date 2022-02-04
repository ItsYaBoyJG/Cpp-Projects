/*
*
* calculates avg rain fall
*/

#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
	int years = 0;
	int yearsToMonths = years * 12;
	const int month = 12;
	float totalRain = 0.0f;
	float rainfall = 0.0f;


	cout << "Enter number of years: " << endl;
	cin >> years;

	while (years < 1)
	{
		cout << "Entered years must be at least one";
		cin >> years;
	}


	for (int i = 1; i <= years; i++)
	{
		for (int months = 1; months <= month; months++)
		{
			cout << "Enter the rainfall (in inches) for " << months << "months: ";
			cin >> rainfall;

			while (rain < 0)
			{
				cout << "This must be a positive value";
				cin >> rainfall;
			}

			totalRain = rainfall;
		}
	}

	cout << "Number of months: " << yearsToMonths << endl;
	cout << "Total rainfall: " << setprecision(3) << fixed << totalRain << "inches" << endl;
	cout << "Average rainfall: " << setprecision(3) << fixed << totalRain / yearsToMonths << "inches";

	return 0;

}
/*
* a program to calculate a vehicle's gas mileage
*/

#include <iostream>
#include <iomanip>
#include <string>



int main()
{
	double gallons = 0.0;
	double miles = 0.0;
	double milesPerGallon = 0.0;
	//std::string gals = "Enter the total gallons of gas the vehile can hold : ";

	std::cout << "Enter the total gallons of gas the vehile can hold : ";
	std::cin >> gallons;
	std::cout << std::endl;
	std::cin >> miles; 
	std::cout << std::endl;
	std::cout << std::endl;

	// calculations
	milesPerGallon = miles / gallons;

	std::cout << "setprecision(3)" << std::fixed;
	std::cout << "The calculated miles per gallon of the vehicle: " << milesPerGallon << ". \n";


	return 0;

}
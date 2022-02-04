#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int fahrenheit;
    int celsius;

    cout << "What is the temperature in degrees Celsius? ";
    cin >> celsius;

    //Calculate the temperature in degrees fahrenheit
    fahrenheit = (9 / 5) * celsius + 32;

    //Display degree fahrenheit
    cout << setprecision(2) << fixed;
    cout << "The temperature in degrees fahrenheit is " << fahrenheit << ".\n";

    return 0;
}
// program performs the quadratic equation from a trinomial

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int xvalues1;
    int xvalues2;
    int a;
    int b;
    int c;

    cout << "What is the a value in the trinomial?";
    cin >> a;

    cout << "What is the b value in the trinomial?";
    cin >> b;

    cout << "What is the c value in the trinomial?";
    cin >> c;

    //Calculate the values of the trinomial equation
    xvalues1 = ((-1 * b) + (((b * b) - (4 * (a * c))) * (1 / 2))) / (2 * a);
    xvalues2 = ((-1 * b) - (((b * b) - (4 * (a * c))) * (1 / 2))) / (2 * a);

    cout << setprecision(3) << fixed;
    cout << "The x values for the trinomial are " << xvalues1 << ".\n";
    cout << "and " << xvalues2 << ".\n";


    return 0;
}
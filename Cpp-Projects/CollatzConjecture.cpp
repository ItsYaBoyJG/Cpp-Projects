/*
* Collatz Conjecture
*
* Program that starts with a number n > 1. Then finds the number of steps it takes to reach one using:
*
* if n is even, divide by 2. if n is odd, multiply by 3 and add 1.
*
*/

#include <iostream>

int collatz(int n);

int main()
{
	int n;

	std::cout << "Enter the integer you wish to find the Collatz Conjecture for: " << endl;

	std::cin >> n;

	std::cout << "The number of steps taken to reach one is: " << collatz(n) << endl;
}

int collatz(int n)
{
	int stepsTaken;

	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			stepsTaken++;
		}
		else {
			n = (n * 3) + 1;
			stepsTaken++;
		}
	}
	return stepsTaken;
}


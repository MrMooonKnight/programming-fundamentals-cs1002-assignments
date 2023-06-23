#include <iostream>


using namespace std;

// FUNCTION FOR GCD

int gcd(int x, int y)
{
	int rem;

	// THE ALGORITHM
	while ((x % y) > 0)  
	{
		rem = x % y;
		x = y;
		y = rem;
	}
	
	return y;
}


int main()
{

	// VARIABLES
	int num1;
	int num2;
	int GCD;	
	
	// USER INPUT
	cout << "\nEnter First Number : ";
	cin >> num1;
	cout << "\nEnter Second Number : ";
	cin >> num2;
	cout << endl;
		
	// CALLING THE FUNCTION
	GCD = gcd(num1, num2);
	
	
	// OUTPUTTING THE GCD
	cout << "The GCD Is : " << GCD << endl << endl;
	
	return 0;

}


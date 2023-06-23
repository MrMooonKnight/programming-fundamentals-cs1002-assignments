#include <iostream>


using namespace std;

// FUNCTION TO CONVERT BINARY TO DECIMAL

long binToDec(long bin)
{
	// VARIABLES
	long rem;
	long multiply = 1;
	long num = 0;
	
	// THE ALGORITHM
	while(bin > 0)
	{
		rem = bin % 10;
		rem = rem * multiply;
		num += rem;
		multiply = multiply * 2;
		bin = bin / 10;
	}
	
	return num;

}


int main()
{
	system("clear");
	
	// VARIABLES
	long binary;
	long check;
	long rem;
	
	// USER INPUT
	cout << "\nEnter A Number In Binary : ";
	cin >> binary;
	
	check = binary;
	
	// INPUT VALIDATION
	while(check > 0)
	{
		rem = check % 10;
		check = check / 10;
		
		if (rem > 1)
		{
			cout << "\nInvalid, digits cannot be other than 0 or 1.\nEnter Again : ";
			cin >> binary;
			check = binary;
		}
	}
	
	// CALLING THE FUNCTION
	binary = binToDec(binary);
	
	// OUTPUT IN DECIMAL
	cout << "\nYour Number In Decimal Is : " << binary << endl << endl;

	return 0;

}


#include <iostream>

using namespace std;

int main()

{
	
	// VARIABLES

	int terms;
	int i = 0;
	float numerator = 1;
	float denominator = 2;
	float value;
	
	// INPUTTING THE NUMBER OF TERMS FROM THE USER
	
	cout << "\nEnter The Number Of Terms : ";
	cin >> terms;
	
	cout << endl << endl ;
	
	// OUTPUTTING THE SEQUENCE
	
	do
	{
		value = (numerator)/denominator;
		cout << value << ",";
		numerator = (numerator*2)+1;
		denominator *= 2;
	
	i++;
	} while (i < terms);
	
	cout << endl << endl ;	

	return 0;
}

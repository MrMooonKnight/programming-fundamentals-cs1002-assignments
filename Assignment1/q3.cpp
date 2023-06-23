#include <iostream>

using namespace std;

int main()
{
	// Digits of the Input Number
	
	int number = 0;
	int modnum = 0;
	int dig1 = 0;
	int dig2 = 0;
	int dig3 = 0;
	int dig4 = 0;
	int dig5 = 0;
	
	// Remainders
	
	int rem1 = 0; 	
	int rem2 = 0;
	int rem3v = 0;

	//Getting the number from the user
	
	cout <<"\nEnter a 5-Digit Number: ";
	cin >> number;
	
	//Getting 1st digit of the number
	
	dig1 = number/10000;
	
	//Getting the 2nd digit 

	rem1 = number%10000;
	dig2 = rem1/1000;

	//Getting The Third Digit
	
	rem2 = rem1%1000;
	dig3 = rem2/100;
	
	//Getting The Fourth Digit
	
	rem3 = rem2%100;
	dig4 = rem3/10;
	
	//Getting The Last Digit
	
	dig5 = rem3%10;

	// Modifying The Number 
	
	dig1 = (dig1/2);
	dig2 = (dig2/2);
	dig3 = (dig3/2);
	dig4 = (dig4/2);
	dig5 = (dig5/2);

	// Displaying Output
	
	cout << "\nModified Number: " << dig5 << dig4 << dig3 << dig2 << dig1 <<endl <<endl;
	
	
		

	return 0;
}

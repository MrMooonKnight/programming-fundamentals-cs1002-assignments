#include <iostream>

using namespace std;

int main()

{
		/*7: To get the average of a series of values, you add the values up and then divide the sum by
the number of values. Write a program that asks user to enter five values and show sum and average.
Your program should not have more than 2 variables, one for getting user input and other for keeping
the sum.*/

	float var1 = 0;
	float var2 =0;

	
	cout << "\nEnter First Value : ";
	cin >> var1;
	var2 = var2 + var1;
	
	cout << "Enter Second Value : ";
	cin >> var1;
	var2 = var2 + var1;
	
	cout << "Enter Third Value : ";
	cin >> var1;
	var2 = var2 + var1;
	
	cout << "Enter Fourth Value : ";
	cin >> var1;
	var2 = var2 + var1;
	
	cout << "Enter Fifth Value : ";
	cin >> var1;
	var2 = var2 + var1;
	
	
	cout << "\n----------------------";
	cout << "\nThe Sum Is : " <<var2 <<endl;
	
	var1 = (var2/5);
	cout << "The Average Is : " << var1 <<endl;
	cout << "----------------------"  << endl << endl;


	return 0;
}

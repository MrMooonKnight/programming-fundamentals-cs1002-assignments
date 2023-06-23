#include <iostream>

using namespace std;


int main()

{	
 	// COLOURS
 	
	int clr1, clr2, clr3, clr4, clr5;
	
	//VARIABLES
	
	int num1, num2, num3, num4, num5;
	
	
	//RANDOM NUMBERS FOR COLORS
	srand(time(0));
	clr1 = rand() % 7 + 30;
	clr2 = rand() % 7 + 30;
	clr3 = rand() % 7 + 30;
	clr4 = rand() % 7 + 30;
	clr5 = rand() % 7 + 30;
	
	cout << "\n----------------------------------" << endl;
	
	//USER INPUT AND VALIDATION
	
	cout << "\nEnter Number 1st Number : ";
	cin >> num1;
	while((num1 < 1) || (num1 > 30))
	{
		cout << "\nInvalid, Enter Again : ";
		cin >> num1;
	}
	
	cout << "\nEnter Number 2nd Number : ";
	cin >> num2;
	while((num2 < 1) || (num2 > 30))
	{
		cout << "\nInvalid, Enter Again : ";
		cin >> num2;
	}
	
	cout << "\nEnter Number 3rd Number : ";
	cin >> num3;
	while((num3 < 1) || (num3 > 30))
	{
		cout << "\nInvalid, Enter Again : ";
		cin >> num3;
	}
	
	cout << "\nEnter Number 4th Number : ";
	cin >> num4;
	while((num4 < 1) || (num4 > 30))
	{
		cout << "\nInvalid, Enter Again : ";
		cin >> num4;
	}
	cout << "\nEnter Number 5th Number : ";
	cin >> num5;
	while((num5 < 1) || (num5 > 30))
	{
		cout << "\nInvalid, Enter Again : ";
		cin >> num5;
	}
	
	cout << "\n----------------------------------" << endl;
	cout << endl;
	
	// DISPLAYING BAR CHART
	
	for(int i = 0; i < num1; i++)
	{
		cout << "\033[1;" << clr1 << "m";
		cout << ("*"); 
	}	
	
	cout << endl;
	
	for(int i = 0; i < num2; i++)
	{
		cout << "\033[1;" << clr2 << "m";	
		cout << ("*"); 
	}	
	
	cout << endl;
	
	for(int i = 0; i < num3; i++)
	{
		cout << "\033[1;" << clr3 << "m";	
		cout << ("*"); 
	}	
	
	cout << endl;
	
	for(int i = 0; i < num4; i++)
	{
		cout << "\033[1;" << clr4 << "m";
		cout << ("*"); 
	}	
	
	cout << endl;
	
	for(int i = 0; i < num5; i++)
	{
		cout << "\033[1;" << clr5 << "m";	
		cout << ("*"); 
	}	
	
	// RESETTING COLOR
	
	cout <<"\033[0m";
	
	
	cout << "\n\n----------------------------------" << endl;
	
	cout << endl << endl;

	return 0;
}

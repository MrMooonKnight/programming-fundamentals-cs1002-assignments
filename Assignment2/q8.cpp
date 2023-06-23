#include <iostream>

using namespace std;

int main()
{
	//Variables
	int num1;
	int num2;
	int color = 1;
	int green;
	
	//Input
	cout <<"\n----------------------------------" << endl << endl;
	cout << "\nEnter Two Numbers From 1 to 36" << endl;
	cout << "\nEnter The 1st Number : ";
	cin >> num1;
	if ((num1 < 1) || (num1 > 36))
		{
		cout <<"\n----------------------------------" << endl << endl;
		cout << "\nInvalid Input" << endl << endl;
		cout <<"\n----------------------------------" << endl << endl;
		return 0;
		}
	cout << "\nEnter The 2nd Number : ";
	cin >> num2;	
	if ((num2 < 1) || (num2 > 36))
		{
		cout <<"\n----------------------------------" << endl << endl;
		cout << "\nInvalid Input" << endl << endl;
		cout <<"\n----------------------------------" << endl << endl;
		return 0;
		}
	cout <<"\n----------------------------------" << endl << endl;
	//Input Validation

	
	//SWITCH TO CHECK THE COLORS
	switch(color)
	{
		
		// Green 1 6 7 12 17 28 33
		case 1 : if ((num1 == 1) || (num1 == 7) || (num1 == 6) || (num1 == 12) || (num1 == 17) || (num1 == 20) || (num1 == 28) || (num1 == 33))
				{
				if ((num2 == 1) || (num2 == 7) || (num2 == 6) || (num2 == 12) || (num2 == 17) || (num2 == 20) || (num2 == 28) || (num2 == 33))
					{
					cout << "\nColor Is Green" << endl << endl;
					cout <<"\n----------------------------------" << endl << endl;
					return 0;
					}
					else	{
						cout << "\nColor Is Different" << endl << endl;
						cout <<"\n----------------------------------" << endl << endl; 
						return 0;
						}
				}

		//Red 2 11 13 18 19 24 29 32
		case 2 : if ((num1 == 2) || (num1 == 11) || (num1 == 13) || (num1 == 18) || (num1 == 19) || (num1 == 24) || (num1 == 29) || (num1 == 32))
				{
				if ((num2 == 2) || (num2 == 11) || (num2 == 13) || (num2 == 18) || (num2 == 19) || (num2 == 24) || (num2 == 29) || (num2 == 32))
					{
					cout << "\nColor Is Red" << endl << endl;
					cout <<"\n----------------------------------" << endl << endl;
					return 0;
					}
					else
						{
						cout << "\nColor Is Different" << endl << endl; 
						cout <<"\n----------------------------------" << endl << endl;
						return 0;
						}
				}

		//Blue 3 10 14 23 25 30 31 36 
		case 3 : if ((num1 == 3) || (num1 == 10) || (num1 == 14) || (num1 == 23) || (num1 == 25) || (num1 == 30) || (num1 == 31) || (num1 == 36))
				{
				if ((num2 == 3) || (num2 == 10) || (num2 == 14) || (num2 == 23) || (num2 == 25) || (num2 == 30) || (num2 == 31) || (num2 == 36))
					{
					cout << "\nColor Is Blue" << endl << endl;
					cout <<"\n----------------------------------" << endl << endl;
					return 0;
					}
					else	
						{
						cout << "\nColor Is Different" << endl << endl; 
						cout <<"\n----------------------------------" << endl << endl;
						return 0;
						}
				}


		//Orange 4 9 15 22 26 35
		case 4 : if ((num1 == 4) || (num1 == 9) || (num1 == 15) || (num1 == 22) || (num1 == 26) || (num1 == 35))
				{
				if ((num2 == 4) || (num2 == 9) || (num2 == 15) || (num2 == 22) || (num2 == 26) || (num2 == 35))
					{
					cout << "\nColor Is Orange" << endl << endl;
					cout <<"\n----------------------------------" << endl << endl;
					return 0;
					}
					else	
						{
						cout << "\nColor Is Different" << endl << endl; 
						cout <<"\n----------------------------------" << endl << endl;
						return 0;
						}
				}	


		//Gray 5 8 16 21 27 34
		case 5 : if ((num1 == 5) || (num1 == 8) || (num1 == 16) || (num1 == 21) || (num1 == 27) || (num1 == 34))
				{
				if ((num2 == 5) || (num2 == 8) || (num2 == 16) || (num2 == 21) || (num2 == 27) || (num2 == 34))
					{
					cout << "\nColor Is Gray" << endl << endl;
					cout <<"\n----------------------------------" << endl << endl;
					return 0;
					}
					else	
						{
						cout << "\nColor Is Different" << endl << endl; 
						cout <<"\n----------------------------------" << endl << endl;
						return 0;
						}
				}
	}

























	return 0;
	
	
	
	



}

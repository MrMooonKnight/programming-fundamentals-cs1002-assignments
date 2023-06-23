#include <iostream>

using namespace std;

int main ()
{

	int month;
	int date;



	//month validation and input
	
	cout << "\n--------------------------"<<endl;
	cout << "\nEnter Month : ";
	cin >> month;
	if ((month < 1) || (month > 12))
		{
		cout << "\n--------------------------" <<endl;
		cout << "\nInvalid Month" <<endl ;
		cout << "\n--------------------------" <<endl;
		return 0;
		}


	//date validation and input

	cout << "\nEnter Date : ";
	cin >> date;
	cout << "\n--------------------------" <<endl;
				
	//january1 march3 may5, july7, august8, october10, december12   31 days
		
	if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month ==12))
		{
		if ((date > 31) || (date < 1))
			{
			cout << "\nInvalid Date" << endl ;
			cout << "\n--------------------------" <<endl;
			return 0; 	
			}
		}	
				
	//febuary 28
	if (month == 2)
		{
		if ((date >28) || (date < 1))
			{
			cout << "\nInvalid Date" << endl ;
			cout << "\n--------------------------" <<endl;
			return 0; 	
			}	
		}	
		

	// april4 june6 september9 november11
	if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
		{
		if ((date > 30) || (date < 1))
			{
			cout << "\nInvalid Date" << endl ;
			cout << "\n--------------------------" <<endl;
			return 0; 	
			}
		}



	// SEASON TELLER 
	
	// 16/12 15/3 winter
	
	if((month == 12) && (date >= 16))
		cout << "\nIt is Winter" << endl << endl;
		else if (month == 1)
			cout << "\nIt is Winter" << endl << endl;
			else if (month == 2)
				cout << "\nIt is Winter" << endl << endl;
				else if ((month == 3) && (date <= 15))
					cout << "\nIt is Winter" << endl << endl;
					
	
	// 16/3 15/6 spring
	
	if ((month == 3) && (date >= 16))
		cout << "\nIt is Spring" << endl << endl;
		else if (month == 4)
			cout << "\nIt is Spring" << endl << endl;
			else if (month == 5)
				cout << "\nIt is Spring" << endl << endl;
				else if ((month ==6) && (date <=15))
					cout << "\nIt is Spring" << endl << endl;


	// 16/6 15/9 summer

	if ((month == 6) && (date >= 16))
		cout << "\nIt is Summer" << endl << endl;
		else if (month == 7)
			cout << "\nIt is Summer" << endl << endl;
			else if (month == 8)
				cout << "\nIt is Summer" << endl << endl;
				else if ((month ==9) && (date <=15))
					cout << "\nIt is Summer" << endl << endl;
		
		
		
		
	// 16/9 15/12 fall 

	if ((month == 9) && (date >= 16))
		cout << "\nIt is Fall" << endl << endl;
		else if (month == 10)
			cout << "\nIt is Fall" << endl << endl;
			else if (month == 11)
				cout << "\nIt is Fall" << endl << endl;
				else  if ((month ==12) && (date <=15))
					cout << "\nIt is Fall" << endl << endl;
		
	cout << "--------------------------" <<endl <<endl <<endl;

	return 0;
	
}

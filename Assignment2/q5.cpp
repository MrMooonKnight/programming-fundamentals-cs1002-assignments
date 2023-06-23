#include <iostream>

using namespace std;

int main()
{

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int choice = 0;
	
	cout <<"\n--------------------------------------------------------" << endl;
	cout << "\nEnter \"3\" for three numbers and \"4\" for four numbers." <<endl;
	cin >> choice;
	
	if (choice == 3)
		{
		cout <<"\n--------------------------------------------------------"<<endl;
		cout << "\nEnter The First Number : ";
		cin >> num1;
		cout << "\nEnter The Second Number : ";
		cin >> num2;
		cout << "\nEnter The Third Number : ";
		cin >> num3;
		
		
			
		cout <<"\n--------------------------------------------------------";
		//ternary operator		
		(num1 > num2) && (num1 > num3) ? cout << "\nFirst Number is The Greatest" : (num2 > num1) && (num2 > num3) ? cout <<"\nSecond Number is The Greatest" :  (num3 > num1) && (num3 > num2) ? cout <<"\nThird Number is The Greatest" : cout<<"";	
		cout <<"\n--------------------------------------------------------";

				
		} else if (choice == 4)
			{
			cout <<"\n--------------------------------------------------------" << endl;
			cout << "\nEnter The First Number : ";
			cin >> num1;
			cout << "\nEnter The Second Number : ";
			cin >> num2;
			cout << "\nEnter The Third Number : ";
			cin >> num3;
			cout << "\nEnter The Fourth Number : ";
			cin >> num4;
			cout <<"\n--------------------------------------------------------";
			
			
			//ternary operator
			(num1 > num2) && (num1 > num3) && (num1 > num4) ? cout << "\nFirst Number is The Greatest" : (num2 > num1) && (num2 > num3) && (num2 > num4) ? cout <<"\nSecond Number is The Greatest" :  (num3 > num1) && (num3 > num2) && (num3 > num4) ? cout <<"\nThird Number is The Greatest" : (num4 > num1) && (num4 > num2) && (num4 > num3) ? cout <<"\nFourth Number is The Greatest" : cout <<endl;
			
			
			cout <<"\n--------------------------------------------------------";
			
			
			} else 
				cout << "\nInvalid Choice" <<endl <<endl <<endl;	
			

		

	cout <<endl <<endl <<endl;
































	return 0;
}

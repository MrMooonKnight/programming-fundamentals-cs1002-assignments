#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	//Variables
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	
	int scale = 0;

	//Taking Inputs from the user	
	
	cout <<"\nEnter Five Numbers Between 0 to 10";
	
	cout <<"\nEnter Number 1 : ";
	cin >> num1;
	cout <<"Enter Number 2 : ";
	cin >> num2;
	cout <<"Enter Number 3 : ";
	cin >> num3;
	cout <<"Enter Number 4 : ";
	cin >> num4;
	cout <<"Enter Number 5 : ";
	cin >> num5;
	cout <<"Enter Scale : ";
	cin >> scale;
	 	
	//Program For Bar Chart
	
	cout << endl <<endl;
	cout << setw((scale*num1)+1) << setfill('*') << '\n';	 	
	cout << setw((scale*num2)+1) << setfill('*') << '\n';
	cout << setw((scale*num3)+1) << setfill('*') << '\n';
	cout << setw((scale*num4)+1) << setfill('*') << '\n';
	cout << setw((scale*num5)+1) << setfill('*') << '\n';
	cout << endl <<endl;


	return 0;




}

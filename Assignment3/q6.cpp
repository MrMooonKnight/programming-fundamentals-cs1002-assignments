#include <iostream>

using namespace std;

int main()

{

	int  number = 1;
	
	cout << endl << endl << endl;

	// FIRST LINE OF DASHES 

	for(int i = 0; i < 40 ; i++)
	{
		cout << "-";
	}
	
	cout << endl;
	
	// SECOND LINE
	
	for(int i = 0; i <10; i++)
	{
		for(int j = 0; j < 1; j++)
		{
			cout << "_";
		}
	 	for(int k = 0; k < 1; k++)
		{
			cout << "-";
		}
		for(int l = 0; l < 1; l++)
		{
			cout << "^";
		}
		for(int m = 0; m < 1; m++)
		{
			cout << "-";
		}
	}
	
	cout << endl;
	
	// THIRD LINE OF NUMBERS
	
	for(int h = 0; h < 2; h++)
	{
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 2; j++)
			{
				cout << number;
			}
			
		number++;
		
		}
		
		for(int k = 0; k < 2; k++)
		{
			cout << "0";
		}
		
		number = 1;
	}
		
	cout << endl;
	
	// FOURTH LINE OF DASHES

	for(int i = 0; i < 40 ; i++)
	{
		cout << "-";
	}
	

	cout << endl << endl << endl;

	return 0;
}

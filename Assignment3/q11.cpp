#include <iostream>

using namespace std;


int main()

{

	// VARIABLES
	
	int space = 1;
	int space1 = 5;
	int star = 0;

	cout << endl << endl << endl;
	
	// OUTPUT 
		
	for(int h = 0; h < 3; h++)	
	{
		// BOTTOM HALF
		space = 1;
		space1 = 5;
		for(int i =0; i < 3; i++)
		{
			for( int j = 0; j < space; j++)
			{
				cout << " ";
			}
			for(int k = 0; k < 1; k ++)
			{
				cout << "*";
			}	
			for(int l = 0; l < space1; l++)
			{
				cout << " ";
			}
			for(int m = 0; m < 1; m ++)
			{
				cout << "*";
			}	
			space++;
			space1 -= 2;
			cout << endl;
		}
		
		// UPPER HALF
		
		space = 4;
		space1 = -1;
		star = 0;
			
		for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < space; j++)
			{
				cout << " ";
			}
			
			for(int k = 0; k < 1; k++)
			{
				cout << "*";
			}
			
			for(int l = 0; l < space1; l++)
			{
				cout << " ";
			}
			
			for(int m = 0; m < star; m++)
			{
				cout <<"*";
			}
		
		cout << endl;
		space--;
		space1 += 2;
		star = 1;

		}
	}		

	cout << endl << endl << endl;
	return 0;	
}

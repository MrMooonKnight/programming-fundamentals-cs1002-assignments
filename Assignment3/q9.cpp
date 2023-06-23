#include <iostream>

using namespace std;

int main()

{
	// VARIABLES

	int r1 = 6;
	int space = 2;
	int space1 = 0;

	cout << endl << endl;

	// OUTPUT 
	
	// FIRST ROW

	for(int j= 0; j < 2; j++)
	{
		for(int k = 0; k < 1; k ++)
		{
			cout << "+";
		}
		
		for(int l = 0; l < r1; l++)
		{
			cout << "-";
		}		
		r1 = 0;	
	}
	
	cout << endl;
	
	// UPPER HALF
	
	for(int h = 0; h < 2; h++)
	{
		for(int i = 0; i < 3; i++)
		{
		
			for(int j = 0; j < 1; j++)
			{
				cout << "|";
			}
			for(int k =0; k < space; k++)
			{
				cout << " ";
			}
			for(int l = 0; l < 1; l++)
			{
				cout << "^" ;
			}
			for(int m =0; m < space1; m++)
			{
				cout << " ";
			}
			for(int n = 0; n < 1; n++)
			{
				cout << "^" ;
			}
			for(int o = 0; o < space; o++)
			{
				cout << " ";
			}
			for(int  p = 0; p < 1; p++)
			{
				cout << "|";
			}
			cout << endl;
			space1 += 2;	
			space--;
		}
		space = 2;
		space1 = 0;
	}

	r1 = 6;
	
	// MIDDLE ROW.
	
	for(int j= 0; j < 2; j++)
	{
		for(int k = 0; k < 1; k ++)
		{
			cout << "+";
		}
		
		for(int l = 0; l < r1; l++)
		{
			cout << "-";
		}		
		r1 = 0;
		;
	
	}
	
	cout << endl;
	
	space = 0;
	space1 = 4;
	
	// LOWER HALF
	
	for(int h = 0; h < 2; h++)
	{
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 1; j++)
			{
				cout << "|";
			}
			for(int k = 0; k < space; k++)
			{
				cout << " " ;
			}
			for(int l = 0; l < 1; l++)
			{
				cout << "V" ;
			}
			for(int m = 0; m < space1; m++)
			{
				cout << " " ;
			}
			for(int n = 0; n < 1; n++)
			{
				cout << "V" ;
			}
			for(int o = 0; o < space; o++)
			{
				cout << " " ;
			}
			for(int  p = 0; p < 1; p++)
			{
				cout << "|";
			}
			cout << endl;
			space1 -=2;
			space++;
		}
	space = 0;
	space1 = 4;
	}
		
	r1 = 6;
	
	// LAST ROW
	
	for(int j= 0; j < 2; j++)
	{
		for(int k = 0; k < 1; k ++)
		{
			cout << "+";
		}
		
		for(int l = 0; l < r1; l++)
		{
			cout << "-";
		}		
		r1 = 0;
		;
	}
	
	cout << endl << endl << endl;

	return 0;
}

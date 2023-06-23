#include <iostream>

using namespace std;

int main()

{
	// VARIABLES

	int number = 1;	
	int n = 1, n1 = 0, n3 = 0;
	int number1 = 0;
	int space = 16;
	
	cout << endl << endl << endl;
	
	// OUTPUT
	
	// UPPER HALF
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < space; j++)
		{
			cout << " ";
		}
	
		for(int k = 0; k < n; k++)
		{
			cout << number << " ";
			number++;
		}
		
		for(int l = 0; l < n1; l++)
		{
			cout << number1 << " " ;
			number1--;
		}
		
		n1++;
		n++;
		n3++;
		number1 = n3;	
		number = 1;
		space -=2;
		cout << endl;
	}

	number = 1;
	n = 8;
	space = 2;
	
	// LOWER HALF
	
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < space; j++)
		{
			cout << " ";
		}	
	
		for(int k = 0; k < n; k++ )
		{
			cout << number << " ";
			number++;
		}	
	
		space +=2;
		n--;
		number = 1;
		cout << endl;
	
	}

	cout << endl << endl << endl;
	
	return 0;	
}

#include <iostream>

using namespace std;

int main()

{

	// VARIABLES	
	
	int ster = 6;
	int space = 1;
	int fslash = 6;
	int bslash = 0;
	
	cout << endl << endl;
	
	// OUTPUT

	for(int i = 0; i < 7; i++)
	{
		//asteric
		for(int j = 0; j < ster; j ++)
		{
			cout << "*";
		}	
		
		//space
		for(int k = 0; k < space; k++)
		{
			cout << " ";
		}	
		
		// f slash
		for(int l = 0; l < fslash; l++)
		{
			cout << "//";
		}
		
		// b slash
		for(int m = 0; m < bslash; m++)
		{
			cout << "\\\\";
		}
	
		//space
		for(int n = 0; n < space; n++)
		{
			cout << " ";
		}
	
		//asteric
		for(int o = 0; o < ster; o++)
		{
			cout << "*";
		}
	
		ster--;
		space++;
		fslash--;
		bslash++;
		cout << endl;
	
	}


	cout << endl << endl ;

	return 0;
}

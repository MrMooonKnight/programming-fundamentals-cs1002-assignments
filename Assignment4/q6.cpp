#include <iostream>

using namespace std;

// CHEER FUNCTION
void cheer()
{
	// VARIABLES
	int cheers;
	int lines;
	int ind = 0;
	int go;
	int bgo;
	
	// USER INPUT
	cout << "\nLine : ";
	cin >> lines;
	cout << "\nCheers : ";
	cin >> cheers;
	cout << endl << endl;
	bgo = cheers - 1;
	
	// LOOP FOR OUTPUTTING CHEERS
	for(int i =0; i < lines; i++)
	{
	
		
			// indentation
			for(int k = 0; k < ind; k++)
			{
				cout << "   ";
			}
			
			// go
			for(int l = 0; l < 1; l++)
			{
				cout << "Go";
			}
			
			
			// buddy go
			for(int m = 0; m < bgo; m++)
			{
				cout << " Nawaz Go";
			}
			cout << endl;
			ind++;			
	}

	cout << endl << endl;

}


int main()
{

	// CALLING THE FUNCTION	
	cheer();

	return 0;
}


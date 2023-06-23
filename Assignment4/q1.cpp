#include <iostream>
#include <iomanip>

using namespace std;


// FUNCTION FOR THE VALUES OF PI

int pi(int)
{

	// VARIABLES
	
	int term = 1;
	float num = 4;
	float den = 1;
	float result = 0;
	char choice;
	int found = 0;
	int bground = 41; 

	do
	{
		// COLOR CHANGING
		cout << "\033[1;" << 43 << "m" << "\nTerm\tValue Of Π";
		cout <<"\033[0m";
		
		//LOOP FOR CALCULATING PI
		for(int i = 0; i < 5; i++)
		{
			
			if(term % 2 == 0)
			{
				result = result - num/den;
			}
																																									
			if(term % 2 != 0)
			{
				result = result + num/den;
			}																																						
				
			den+=2;
			cout << "\n " << setw(8) << left << term << setw(10) << left << result;
		
			static_cast<float>(result);
			
			
			// CHECKING FOR 3.14
			if(result < 3.15d && result >= 3.14d)
			{
				
				cout << endl;
				cout << "\033[1;" << bground << "m" << "\nFound 3.14 on " << term << " term.";
				cout <<"\033[0m";
				cout  << endl;
				found++;
			}
			
			term++;
					
		}
		cout << "\033[1;" << 43 << "m" << "\n";
		cout <<"\033[0m";	
		cout << endl << endl << " ";
		cin >> choice;
		
		// STOPPING
		if(choice == 'S' || choice == 's')
		{	
			break;
		}
		
	// CONTINUEING
	} while (choice == 'C' || choice == 'c');

	if(found <= 0)
	{
		return -1;
	}
	return 0;
}


int main()

{


	int x;
	
	
	//CALLING FUNCTION FOR PI
	x = pi(x);

	// CHECKING IF WE REACHED PI OR NOT
	if(x == -1)
	{
		cout << "\nWe Did Not Reach 3.14."; 
	}
	
	cout << endl << endl;

	return 0;
	
	
}















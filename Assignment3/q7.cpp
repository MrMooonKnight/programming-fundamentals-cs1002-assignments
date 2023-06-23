#include <iostream>

using namespace std;

int main()

{
	// COUNTERS OR CONTROLLERS
	
	int i = 0;
	int j = 0;
	int k = 0;
	
	int output = 1;
	
	cout << endl << endl;

	// FIRST LINE OF : |

	while(i < 6)
	{
		while(j < 9)
		{
			cout << " ";
			j++;
		}
		while(k < 1)
		{
			cout << "|";
			k++;
		}
	
	
	i++;
	j = 0;
	k = 0;
	
	}
	
	// RESETTING CONTROLLERS
	
	i = 0;
	j = 0;
	k = 0;
	cout << endl;
	
	// SECOND LINE OF NUMBERS
	
	while(i < 6)
	{
		while(k < 9)
		{
			while(j < 1)
			{
				cout << output;
				j++;
			}

			output++;
			j =0;
			k++;
		}
		
	cout << "0";
	k = 0;
	output = 1;
	i++;
	
	}

	cout << endl << endl << endl;

	return 0;
}

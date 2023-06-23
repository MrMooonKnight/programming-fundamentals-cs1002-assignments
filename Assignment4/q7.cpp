#include <iostream>

using namespace std;

// FUNCTION

bool pkrtopar(bool)
{
	// VARIABLES
	bool result;
	
	int pkr;
	int par6 = 6;
	int par9 = 9;
	int par20 = 20;
	
	// USER INPUT
	cout << "\nEnter The Amount Of PKR : ";
	cin >> pkr;
	
	
	// LOOP TO CHECK IF IT IS POSSIBLE TO CONVERT OR NOT
	for(int i = 0; i < 1; i++)
	{
	
		if(1)
		{
			if(pkr%6 == 0)
			{
				result = true;
				break;
			}
			if(pkr%9 == 0)
			{
				result = true;
				break;
			}
			if(pkr%20 == 0)
			{
				result = true;
				break;
			}
			if((pkr%20)%6 == 0)
			{
				result = true;
				break;		
			}
			if((pkr%20)%9 == 0)
			{
				result = true;
				break;
			}
			if((pkr%9)%6 == 0)
			{
				result = true;
				break;
			}
			
			if(((pkr%20)%9)%6 == 0)
			{
				result = true;
				break;
			}
		} 
		
		else
		{
			result = false;
		}
	} 

	return result;
}


int main()
{
	// VARIABLES
	bool possibility;
	bool result;
	
	// THE FUNCTION
	possibility = pkrtopar(result);
	
	// OUTPUT
	if( possibility == true )
	{
		cout << "\nIt Is Possible" << endl << endl;
	} 
	else
	{
		cout << "\nIt Is Not Possible"  << endl << endl;
	} 
	
	return 0;
}



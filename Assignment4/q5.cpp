#include <iostream>

using namespace std;

// HIGH LOW FUNCTION PROTOTYPE
bool highLow(int);


int main()
{
		
	// VARIABLES
	int num;
	bool result;
	
	// USER INPUT
	cout << "\nEnter Your Number : ";
	cin >> num;
	
	// CALLING THE FUNCTION
	result = highLow(num);
	
	// OUTPUT
	if(result == true)
	{
		cout << "\nAlternating Number" << endl << endl;
	}
	else
	{
		cout << "\nNot An Alternating Number" << endl << endl;
	}
	
	return 0;
}


bool highLow(int num) 
{

	// VARIABLES
	bool highNum = false;
	bool lowNum = false;

	// LOOP TO CHECK THE NUMBER
	while (num > 0) 
	{ 
		// IF THE LAST DIGIT IS HIGH
		if(num % 10 >= 5) 
		{
			// THIS CONDITION IS FALSE WHEN THE FUNCTION RUNS FOR THE FIRST TIME
			if(highNum == true) 
			{
				return false;
			} 
			
			else 
			{
		    		lowNum = false;
		   		highNum = true;    	 
				   
		        }
		} 
		
		// IF THE LAST DIGIT IS LOW THEN THE PROGRAM STARTS FROM HERE
		// num % 10 <= 4
		else 
		{
			// THIS CONDITION IS FALSE WHEN THE FUNCTION RUNS FOR THE FIRST TIME
			if(lowNum == true) 
			{
				return false;
			}
			else
			{
				highNum = false;
				lowNum = true;
			}
		}

		// MOVING ON TO THE NEXT DIGIT
		num /= 10;
    }

    return true;

 }

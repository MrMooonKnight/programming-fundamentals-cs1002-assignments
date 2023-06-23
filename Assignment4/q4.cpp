#include <iostream>


using namespace std;


// FUNCTION TO REVERSE A NUMBER

int reverse(int num)
{
	int rem = 0;
	int rev = 0;
	
	// ALGORITHM FOR REVERSING
	while(num != 0)    
	{    
		rem = num % 10;      
		rev = rev * 10 + rem;    
		num /= 10;    
	}
	return rev;

}


int main()
{
	// VARIABLES
	int num = 10;
	int numrev = 0;
	int term = 1;
	
	// LOOP TO CHECK ALL THE PALINDROME NUMBERS
	for(int i = 10; i <= 99999; i++)
	{
	
		// CALLING HTE FUNCTION
		numrev = reverse(num);
		
		// CHECKING WHETHER A NUMBER IS A PALINDROME OR NOT
		if(numrev == num)
		{
			cout << "\nPalindrome Number " << term << " Is : " << numrev << endl;
			term++;
		}
		
		num++;
	}
	
	cout << endl << endl;
	
	return 0;

}

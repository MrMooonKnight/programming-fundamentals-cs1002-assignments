#include <iostream>


using namespace std;

// FUNCTION PROTOTYPES
bool isAlpha(char);
bool isDigit(char);
bool isAlnum(char);
bool isXdigit(char); 
bool isLower(char);
bool isUpper(char);
bool isSpace(char);


int main()
{
	// VARIABLES
	char var;
	bool result;
	
	// USER INPUT
	cout << "\nEnter The Character : ";
	cin.get(var);
	
	
	// CALLING THE FUNCTIONS ONE BY ONE
	result = isAlpha(var);
	if(result == true)
	{
		cout << "\nisAlpha() = True";
	}
	
	
	
	result = isDigit(var);
	if(result == true)
	{
		cout << "\nisDigit() = True";
	}
	
	result = isAlnum(var);
	if(result == true)
	{
		cout << "\nisAlnum() = True";
	}
	
	result = isXdigit(var);
	if(result == true)
	{
		cout << "\nisXdigit() = True";
	}
	
	result = isLower(var);
	if(result == true)
	{
		cout << "\nisLower() = True";
	}
	
	result = isUpper(var);
	if(result == true)
	{
		cout << "\nisUpper() = True";
	}
	
	
	result = isSpace(var);
	if(result == true)
	{
		cout << "\nisSpace() = True";
	}
	
	cout << endl << endl;
	return 0;
}


// FUNCTION DEFINITIONS OR BODIES


bool isAlpha(char var)
{
	if( ((var > 64) && (var < 91)) ||  ((var > 96) && (var < 123)) )
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
	
}


bool isDigit(char var)
{

	if( (var > 47) && (var < 58) )
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool isAlnum(char var)
{
	if ( (var > 64 && var < 91) || (var > 96 && var < 123) || (var > 47 && var < 58))
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool isXdigit(char var)
{

	if ( (var > 64 && var < 71) || (var > 96 && var < 103) || (var > 47 && var < 58))
	{
		return true;
	}
	else
	{
		return false;
	}

} 

bool isLower(char var)
{

	if(var > 96 && var < 123)
	{
		return true;
	}
	else
	{
		return false;
	}

}


bool isUpper(char var)
{

	if(var > 64 && var < 91)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool isSpace(char var)
{

	if(var == 32)
	{
		return true;
	}
	else
	{
		return false;
	}

}



















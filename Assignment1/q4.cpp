#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	char letr1;
	char letr2;
	char letr3;
	char letr4;
	char letr5;
	char letr6;
	char letr7;
	char letr8;
	
	//Getting the 8 letters word from user
	
	cout <<"\nEnter an 8 letter word : ";
	
	cin.get(letr1);
	cin.get(letr2);
	cin.get(letr3);
	cin.get(letr4);
	cin.get(letr5);
	cin.get(letr6);
	cin.get(letr7);
	cin.get(letr8);
	
	// Converting the word in capital letters using ASCII
	
	letr1 = letr1 - 32;
	letr2 = letr2 - 32;
	letr3 = letr3 - 32;
	letr4 = letr4 - 32;
	letr5 = letr5 - 32;
	letr6 = letr6 - 32;
	letr7 = letr7 - 32;
	letr8 = letr8 - 32;
	
	
	cout <<"\nYour Word In Capital Is : ";
	cout << letr1 << letr2 << letr3 << letr4 << letr5 << letr6 << letr7 << letr8 <<endl <<endl;


























	return 0;


}

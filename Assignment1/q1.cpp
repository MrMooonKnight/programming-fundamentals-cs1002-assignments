#include <iostream>

using namespace std;

int main()
{

	int totaleggs = 0;
	int pack30 = 0;
	int pack24 = 0;
	int pack18 = 0;
	int pack12 = 0;
	int pack6 = 0;
	int eggsleft = 0;
	
	// Get Total Eggs From User
	
	cout << "\n------------------------------" <<endl;
	cout << "\nEnter Total Number of Eggs : ";
	cin >> totaleggs;
	
	// Pack of 30 eggs
	
	pack30 = totaleggs / 30;
	eggsleft = totaleggs % 30; 
	
	cout << "\n------------------------------";
	cout << "\nPacks of 30 will be : " <<pack30;
	cout << "\nEggs left to be packed : " <<eggsleft;
	
	// Pack of 24 eggs
	
	pack24 = totaleggs / 24;
	eggsleft = totaleggs % 24; 
	
	cout << "\n------------------------------";
	cout << "\nPacks of 24 will be : " <<pack24;
	cout << "\nEggs left to be packed : " <<eggsleft;
	
	// Pack of 18 eggs
	
	pack18 = totaleggs / 18;
	eggsleft = totaleggs % 18; 
	
	cout << "\n------------------------------";
	cout << "\nPacks of 18 will be : " <<pack18;
	cout << "\nEggs left to be packed : " <<eggsleft;
	
	
	// Pack of 12 eggs
	
	pack12 = totaleggs / 12;
	eggsleft = totaleggs % 12; 
	
	cout << "\n------------------------------";
	cout << "\nPacks of 12 will be : " <<pack12;
	cout << "\nEggs left to be packed : " <<eggsleft;
	
	// Pack of 6 eggs
	
	pack6 = totaleggs / 6;
	eggsleft = totaleggs % 6; 
	
	cout << "\n------------------------------";
	cout << "\nPacks of 6 will be : " <<pack6;
	cout << "\nEggs left to be packed : " <<eggsleft;
	cout << "\n------------------------------" <<endl <<endl;
	




	return 0;
}

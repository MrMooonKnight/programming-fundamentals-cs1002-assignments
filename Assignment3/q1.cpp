#include <iostream>

using namespace std;


int main()

{
	// VARIABLES

	float score;
	float avg;
	float sum = 0;
	int score80;
	int sbj = 1;
	int i = 0;
	
	cout << "\n-----------------------------------------------" << endl;
	
	// INPUTTING 5 SCORES FROM THE USER
	
	while(i < 5)
	{
		cout << "\nEnter Score Of Subject " << sbj << " : ";
		cin >> score;
		while((score < 0) || (score > 100))
		{
			cout << "\nInvalid Score, Score Can Be In The Range 0-100.";
			cout << "\nEnter Score Of Subject " << sbj << " : ";
			cin >> score;
		}

		if(score > 80)
		{
			score80++;
		}
	sum += score;		
	i++;
	sbj++;
	}

	// AVERAGE CALCULATION

	avg = (sum) / 5 ;
	
	// OUTPUT
	
	cout << "\n-----------------------------------------------" << endl;
	
	cout << "\n\nThe Average is : " << avg;
	cout << "\nThere are " << score80 << " scores which are more than 80.";
	cout << endl << endl ;
	
	cout << "\n-----------------------------------------------" << endl << endl << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int main () 
{

	// ROCK PAPER SCISSORS 
	
	int choice1;
	int choice2;
	
	cout << endl << "------------------------------------------" <<endl;
	//rock
	cout <<"\nEnter 1 for Rock.";
	//paper
	cout <<"\nEnter 2 for Paper.";	
	//scissors
	cout <<"\nEnter 3 for Scissors." <<endl;
	
	cout << endl << "------------------------------------------" <<endl;
	
	cout <<"\nPlayer1's Choice : ";
	cin >> choice1;
	cout <<"\nPlayer2's Choice : ";
	cin >> choice2;

	cout << endl << "------------------------------------------" <<endl;
	
	
	if((choice2 > 3) || (choice2 < 1))
		{
		cout << "\nInvalid Choice" <<endl <<endl;
		cout << "------------------------------------------" <<endl <<endl;
		return 0;
		}
	
	// The Game
	
	switch (choice1)
	
	{	case 1 :
			if((choice1==1) && (choice2 == 3 ))	
			{
				cout << "\nRock Breaks Scissors" <<endl;
				cout << "Player 1 wins." <<endl <<endl;	
				cout << "------------------------------------------" <<endl <<endl;
				return 0;		
			}
			if(choice1 == (choice2 ==1))
			{
				cout << "\nRock And Rock." <<endl;
				cout << "It's a Tie." <<endl <<endl;
				cout << "------------------------------------------" <<endl <<endl;
				return 0;
			}
			if((choice1==1) && (choice2 == 2))	
			{
				cout << "\nPaper Wraps Rock." <<endl;
				cout << "Player 2 Wins." <<endl <<endl;
				cout << "------------------------------------------" <<endl <<endl;
				return 0;
			}
			break;

		case 2 :
			if((choice1 == 2) && (choice2 == 1))
			{
				cout << "\nPaper Wraps Rock" <<endl;
				cout << "Player 1 wins." <<endl <<endl;	
				cout << "------------------------------------------" <<endl <<endl;
				return 0;		
			}
			if((choice2) == (choice1))
			{
				cout << "\nPaper And Paper." <<endl;
				cout << "It's a Tie." <<endl <<endl;
				cout << "------------------------------------------" <<endl <<endl;
				return 0;
			}			
			if((choice2 == 3) && (choice1 == 2))		
			{
				cout << "\nScissors Cut Paper." <<endl;
				cout << "Player 2 Wins." <<endl <<endl;
				cout << "------------------------------------------" <<endl <<endl;
				return 0;
			}
			break;
			
		case 3 :

			if((choice1) == (choice2))
			{
				cout << "\nScissors And Scissors." <<endl;
				cout << "It's a Tie." <<endl <<endl;
				cout << "------------------------------------------" <<endl <<endl;
				return 0;
			}			
			if((choice1 == 3) && (choice2 == 1))	
			{
				cout << "\nRock Breaks Scissors." <<endl;
				cout << "Player 2 Wins." <<endl <<endl;
				cout << "------------------------------------------" <<endl <<endl;
				return 0;
			}
			if((choice1 == 3) && (choice2 == 2))
			{
				cout << "\nScissors Cut Paper" <<endl;
				cout << "Player 1 wins." <<endl <<endl;	
				cout << "------------------------------------------" <<endl <<endl;
				return 0;		
			}
			break;
			
		default:
		
			cout << "\nInvalid Choice" <<endl <<endl;
			cout << "------------------------------------------" <<endl <<endl;	
			return 0;
	}
	
	cout << "------------------------------------------" <<endl <<endl;

	return 0;

}

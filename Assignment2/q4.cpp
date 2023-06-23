#include <iostream>

using namespace std;

int main()

{

	
	//variables
	
	float fats = 0;
	float calories_fat = 0;
	float calories = 0;
	float perc_calories = 0;
	
	
	// user input
	
	cout <<"\n--------------------------------------------------" <<endl;
	cout << "\nEnter The Number of Calories in Grams : ";
	cin >> calories;
	cout << "\nEnter The Number of Fats in Grams : ";
	cin >> fats;
	cout <<"\n--------------------------------------------------" << endl;
	
	
	
	// calories in fat
	calories_fat = fats * 9;	

	// perc of calories from fat
	perc_calories = (calories_fat / calories) *  100 ;


	
	//output

	cout << "\nPercentage of Calories From Fat : " <<perc_calories <<"%" <<endl ;

	if (perc_calories < (0.30 * calories))
		cout << "\nThe Food is Low in Fat";
	
	cout <<endl ;
	cout <<"\n--------------------------------------------------"<<endl <<endl;



	return 0;
}

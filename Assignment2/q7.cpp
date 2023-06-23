#include <iostream>

using namespace std;

int main ()

{
	float grade_steel;
	float hardness;
	float carbon_content;
	float tensile_strength;
	
	cout <<"\n----------------------------------" << endl << endl;
	cout << "\nEnter The Hardness : ";
	cin >> hardness;
	cout << "\nEnter The Carbon Content : ";
	cin >> carbon_content;
	cout << "\nEnter The Tensile Strength : ";
	cin >> tensile_strength;
	cout <<"\n\n----------------------------------" << endl << endl;

	//grade 10;
	if ((hardness > 50) && (carbon_content < 0.7f) && (tensile_strength > 5600))
		cout << "\nGrade is 10" << endl << endl;
		else if ((hardness > 50) && (carbon_content < 0.7f))
			cout << "\nGrade is 9" << endl << endl;
				else if ((carbon_content < 0.7f) && (tensile_strength > 5600))
					cout << "\nGrade is 8" << endl << endl;
						else if ((hardness > 50) && (tensile_strength > 5600))
							cout << "\nGrade is 7" << endl << endl;
								else if ((hardness > 50) || (carbon_content < 0.7f) || (tensile_strength > 5600))
									cout << "\nGrade is 6" << endl << endl;
										else 
											cout << "\nGrade is 5" << endl << endl;
	cout <<"\n----------------------------------" << endl << endl;


	return 0;

}

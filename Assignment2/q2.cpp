#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{

	//variables
	
	int choice = 0;
	
	
	//circle
	const float pi = 3.14159;
	float circle_radius = 0;
	float circle_area = 0; 
	
	//rectangle
	float rectangle_area = 0;
	float rectangle_length = 0;
	float rectangle_width = 0;
	
	//triangle
	float triangle_base = 0;
	float triangle_height = 0;
	float triangle_area = 0;
	
	
	//user choice
	cout << "\n-----------------------------------------";
	cout << endl <<endl << setw(23) << right << "GEOMETRY CALCULATOR";
	cout << "\n-----------------------------------------" << endl;

	cout << "\n1. Calculate Area of a Circle \n2. Calculate the Area of a Rectangle \n3. Calculate the Area of a Triangle \n4. Quit" <<endl;
	cout << "\nEnter Your Choice (1-4) : ";
	cin >> choice;
	cout << "\n-----------------------------------------";

	//switch	

	switch (choice) 

	{	
		// 1 area of circle
		
		case 1 : 
			cout << "\nEnter The Radius Of Circle : ";
			cin >> circle_radius;
			if (circle_radius >=0)
			{
				circle_area = pi * circle_radius * circle_radius;
				cout <<"\nArea of The Circle is : " << circle_area << " Sq Units" <<endl <<endl;
			} else 
				cout << "\nError! Radius Must Be Positive." <<endl <<endl;
				return 0;
			break;



		//2 area of rectangle
		
		case 2 :
			cout << "\nEnter The Length Of Rectangle : ";
			cin >> rectangle_length;
			if (rectangle_length < 0)
				{
				cout << "\nError! Length Must Be Positive." <<endl <<endl;
				return 0;
				}
				
				
			cout << "\nEnter The Width Of Rectangle : ";
			cin >> rectangle_width;
			if (rectangle_width < 0)
				{
				cout << "\nError! Width Must Be Positive." <<endl <<endl;
				return 0;
				}
 			rectangle_area = rectangle_length * rectangle_width;
			cout << "\nArea of The Recangle is : " << rectangle_area << " Sq Units" <<endl <<endl;
			break;
			
			
			
		// 3 area of triangle
		
		case 3 : 
			cout << "\nEnter The Base Of Triangle : ";
			cin >> triangle_base;
			if (triangle_base < 0)
				{
				cout << "\nError! Base Must Be Positive." <<endl <<endl;
				return 0;
				}
				
			cout << "\nEnter The Height Of Triangle : ";
			cin >> triangle_height;
			if (triangle_height < 0)
				{
				cout << "\nError! Height Must Be Positive." <<endl <<endl;
				return 0;
				}

			
 			triangle_area = (triangle_base * triangle_height * 0.5) ;
			cout << "\nArea of The Triangle is : " << triangle_area << " Sq Units" <<endl <<endl;
			break;
			
		// 4 quit
		case 4 :
			cout << "\n Good Bye !" <<endl <<endl;
			return 0;
			
		//input validation	
		default : 
			cout << "Invalid Choice" <<endl <<endl;
	}
	
	cout << "-----------------------------------------" << endl << endl << endl;


	return 0;
			

}



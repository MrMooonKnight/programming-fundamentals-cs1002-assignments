#include <iostream>

using namespace std;

int main()
{
	// Input variables
	
	float x = 0;
	float k = 0;
	float h = 0;
	float b = 0;
	
	// Calculation Variables
	
	float a = 0;
	float z = 0;
	float y = 0;
	float g = 0;
	float c = 0;
	
	// Inputing Variables From The User
	
	//variable x
	cout << "\nEnter the value of \"x\" : ";
	cin >> x;
	//variable k
	cout << "\nEnter the value of \"k\" : ";
	cin >> k;
	//variable h
	cout << "\nEnter the value of \"h\" : ";
	cin >> h;
	//Variable b
	cout << "\nEnter the value of \"b\" : ";
	cin >> b;
	
	
	// Formulas for Expressions
	
	a = (12 * x);
	
	y = (x*x*x*x);
	
	z = ((5 * x) + (14 * y) + (6 * k));	
	
	g = ( (12 + h) / (4*k) );

	c = ((a*a*a) / ((b*b) * (k*k)));

	// Output
	
	cout << "\n-------------------------------";
	// Value of a
	cout << "\nThe Value of \"a\" is : " << a;
	// Value of z
	cout << "\nThe Value of \"z\" is : " << z;
	// Value of y
	cout << "\nThe Value of \"y\" is : " << y;
	// Value of g
	cout << "\nThe Value of \"g\" is : " << g;
	// Value of c
	cout << "\nThe Value of \"c\" is : " << c;
	cout << "\n-------------------------------" <<endl <<endl;





	return 0;
}

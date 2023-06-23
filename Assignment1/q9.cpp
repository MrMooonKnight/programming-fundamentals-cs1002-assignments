#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	//constants	
	
	const float omcMargin = 3.68;
	const float dealerCommision = 7.00;
	const float ifem = 4.76;
	const float levy = 20.487;
	const float salesTax = 0;
				
	// variables
	
	float avgCost = 0;
	float salePrice = 0;
	float levyPrice = 0;
	
	//getting input from the user
	
	cout << "\nEnter MOGAS PSO Weighted Average cost of supply : "; 
	cin >> avgCost;
	
	//formulas
	
	levyPrice = ((avgCost * levy) / 100);	
 	salePrice = avgCost + levyPrice + ifem + omcMargin + dealerCommision + salesTax;										
	
	//output
	
	cout << "\nPetroleum Levy : %" << levy; 
	cout << "\nSales Tax : %" << salesTax;
	cout << "\nMax Ex-Depot Sale Price : Rs. " << setprecision(2) <<fixed << salePrice <<endl <<endl;
	
	
	
	
	
	
	return 0;





















}

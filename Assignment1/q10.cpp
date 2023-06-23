#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

	// Hourly Rate
	
	const float ondemand = 3;
	const float reserved = 2;
	const float spot = 0.5;
	const int hours = 24;
	const int days = 30;
	
	//Number of Owned Machines
	
	float ownDemand = 0;
	float ownReserved = 0;
	float ownSpot = 0;
	
	//Cost Per Month
	
	float costonDemand = 0;
	float costReserved = 0;
	float costSpot = 0;
	float totalCost = 0;
	

	//tile
	
	cout << endl << setw(60) << "AWS Cloud Cost Calculator" << endl;
	cout << setw(60) << "*************************" << endl;
	
	// User Input
	
	cout << "\nNumber Of On-Demand Machines You Own :   ";
	cin >> ownDemand;
	
	cout << "Number Of Reserved Machines You Own :    ";
	cin >> ownReserved;

	cout << "Number Of Spot Machines You Own :        ";
	cin >> ownSpot;
	
	//Calculating price per month of 30 days.
	
	
	
	costonDemand = (ownDemand *ondemand * hours * days);
	costReserved = (ownReserved * reserved * hours * days);
	costSpot     = (ownSpot * spot * hours * days);
	
	totalCost = (costonDemand + costReserved + costSpot);
	
	// Output
	
	cout  << setw(40) << left << "\nCost of On-demand instances : "         
	                          << right << setw(3) << "$" << costonDemand;
	                          
	cout  << setw(40) << left << "\nCost of Reserved instances : "
	                          << right << setw(3) << "$" << costReserved ;
	                          
	cout  << setw(40) << left << "\nCost of Spot instances : " 
	                          << right << setw(3) << "$" << costSpot << endl;
	                          
	cout  << setw(40) << left << "\nTotal Monthly Cost of AWS Machines : "
	                          << right << setw(3) << "$" << totalCost <<endl <<endl;
	
	
	
	return 0;


}

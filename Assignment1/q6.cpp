#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

	//Variables
	
	float price1 = 0;
	float price2 = 0;
	float price3 = 0;
	float price4 = 0;
	float price5 = 0;
	float totalprice = 0;
	
	float tax1 = 0;
	float tax2 = 0;
	float tax3 = 0;
	float tax4 = 0;
	float tax5 = 0;
	float totaltax = 0;
	
	float totpric1 = 0;
	float totpric2 = 0;
	float totpric3 = 0;
	float totpric4 = 0;
	float totpric5 = 0;
	float finalprice = 0;
	


	//Getting Price Input From The User
	
	cout << "\nPrice Of Item 1 = $";
	cin >> price1;
	cout << "\nPrice Of Item 2 = $";
	cin >> price2;
	cout << "\nPrice Of Item 3 = $";
	cin >> price3;	
	cout << "\nPrice Of Item 4 = $";
	cin >> price4;
	cout << "\nPrice Of Item 5 = $";
	cin >> price5;
	cout <<endl;
	
	//Calculations
	
	totalprice = price1 + price2 + price3 + price4 + price5;
	
	tax1 = 0.17 * price1;
	tax2 = 0.17 * price2;
	tax3 = 0.17 * price3;
	tax4 = 0.17 * price4;
	tax5 = 0.17 * price5;
	totaltax = tax1  + tax2 + tax3 + tax4 + tax5;

	totpric1 = tax1 + price1;
	totpric2 = tax2 + price2;
	totpric3 = tax3 + price3; 
	totpric4 = tax4 + price4;
	totpric5 = tax5 + price5;
	finalprice = totpric1 + totpric2 + totpric3 + totpric4 + totpric5;
	
	// Invoice Body
	
	cout <<"----------------------------------------------------------------------------" <<endl;
	
	//Row1

	cout << setw(5) << left << "| ITEM"<< right << setw(5) <<"|"
	     << right
	     << setw(14) << "PRICE" << setw(5) << "|"
	     << setw(21) << "SALES TAX (@17%)" << setw(5) <<"|"
	     << setw(15) << "TOTAL PRICE" << setw(5) << "|";
	     
	     
	//R2
	    
	cout <<"\n----------------------------------------------------------------------------"; 
	    
	cout << setw(6) << left << "\n| 1" << right << setw(6) << "|"
	     << right
	     << setw(14) << setprecision(2) << fixed << price1 << setw(5) << "|"
	     << setw(21) << setprecision(3) << fixed << tax1 << setw(5) << "|"
	     << setw(15) << setprecision(2) << fixed << totpric1 << setw(5) << "|";
	     	     	
	//R3     
	     
	    
	cout << setw(6) << left << "\n| 2" << right << setw(6) << "|"
	     << right
	     << setw(14) << setprecision(2) << fixed << price2 << setw(5) << "|"
	     << setw(21) << setprecision(3) << fixed << tax2 << setw(5) << "|"
	     << setw(15) << setprecision(2) << fixed << totpric2 << setw(5) << "|";
	
	//R4

	cout << setw(6) << left << "\n| 3"<< right << setw(6) << "|"
	     << right
	     << setw(14) << setprecision(2) << fixed << price3 << setw(5)<< "|"
	     << setw(21) << setprecision(3) << fixed << tax3 << setw(5) << "|"
	     << setw(15) << setprecision(2) << fixed << totpric3 << setw(5) << "|";
	     
	//R5
	
	cout << setw(6) << left << "\n| 4"<< right << setw(6) << "|"
	     << right
	     << setw(14) << setprecision(2) << fixed << price4 << setw(5) << "|"
	     << setw(21) << setprecision(3) << fixed << tax4 << setw(5) << "|"
	     << setw(15) << setprecision(2) << fixed << totpric4 << setw(5) << "|";
	
	//R6
	
	cout << setw(6) << left << "\n| 5"<< right << setw(6) << "|"
	     << right
	     << setw(14) << setprecision(2) << fixed << price5 << setw(5) << "|"
             << setw(21) << setprecision(3) << fixed << tax5 << setw(5) << "|"
             << setw(15) << setprecision(2) << fixed << totpric5 << setw(5) << "|";
	    
	//R7	
	
	cout <<"\n----------------------------------------------------------------------------";     
	    
	cout << setw(5) << left <<  "\n| TOTAL" << right << setw(4) << "|"
             << right
	     << setw(14) << setprecision(2) << fixed << totalprice << setw(5) << "|"
	     << setw(21) << setprecision(3) << fixed << totaltax << setw(5) << "|"
	     << setw(15) << setprecision(2) << fixed << finalprice << setw(5) <<"|"
	     <<endl;
	     
	cout <<"----------------------------------------------------------------------------" <<endl <<endl;   
	



	return 0;

}


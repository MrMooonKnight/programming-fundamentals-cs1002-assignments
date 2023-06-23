#include <iostream>

using namespace std;

int main () 
{

	
	string name;
	
	int id;
	int belt;
	int batch;
	int log;
	int unit;
	
	cout << "\n--------------------------------------------" << endl;
	cout << "\nEnter Name Of Army Man : ";
	getline(cin , name);
	cout << "Enter ID Of Army Man : ";
	cin >> id;
	cout << "\n--------------------------------------------" << endl;
	
	//BELT NUMBER
	belt = id & 127;
	
	
	
	//BATCH NUMBER
	batch = id >> 7;
	batch = batch & 1023;
	
	
	
	//LOG NUMBER
	log = id >> 17;
	log = log & 31;

	//UNIT NUMBER 
	unit = id >> 22;
	unit = unit & 1023;

	
	// OUTPUT
	
	cout <<"\nBelt number of " << name << " is : " << belt;
	cout <<"\nBatch number of " << name << " is : " << batch;
	cout <<"\nLog number of " << name << " is : " << log;
	cout <<"\nUnit number of " << name << " is : " << unit << endl ;
	cout << "\n--------------------------------------------"<<endl <<endl;





	return 0;

}

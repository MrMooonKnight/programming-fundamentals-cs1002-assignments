#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	
	//student info
	
	string name;
	string regNum;
	string section;
	
	//course names
	
	const string iict = "Introduction to ICT";
	const string pf = "Programming Fundamentals";
	const string la = "Linear Algebra";
	const string cag = "Calculus and Analytical Geometry";
	const string ps = "Pakistan Studies";
	const string ecc = "English Composition and Comprehension";
	const string oop = "Object Oriented Programing";
	const string dld = "Digital Logic Driving";
	const string df = "Differential Equations";
	const string ise = "Islamic Studies / Ethics";
	const string cps = "Communication and Presentation Skills";
	
	// credit hours
	
	const int chiict = 1; 
	const int chpf =  4;
	const int chla = 3;
	const int chcag = 3;
	const int chps = 3;
	const int checc = 3;
	
	const int choop = 4;
	const int chdld = 4;
	const int chdf = 3;
	const int chise = 3;
	const int chcps = 3;
	
	const int totalchsem1 = 17;
	const int totalchsem2 = 17;
	
	//marks
	
	const float totalmarks1 = 600;
	const float totalmarks2 = 500;
	
	float markiict = 0;
	float markpf = 0;
	float markla = 0;
	float markcag = 0;
	float markps = 0;
	float markecc = 0;
	
	float markoop = 0;
	float markdld = 0;
	float markdf = 0;
	float markise = 0;
	float markcps = 0;
	
	//gpa
	
	float cgpa1 = 0;
	float cgpa2 = 0;
	
	float sgpa1 = 0;
	float sgpa2 = 0;
	
	//userinput
	
	cout << "Enter Your Name : ";
	getline(cin, name);
	cout << "Enter Your Registration Number : ";
	getline(cin, regNum);
	cout << "Enter Your Section : ";
	getline(cin, section);
	
	
	cout << "\nEnter Your Marks Out Of 100";
	cout << "\nYour Marks In " << iict << " : ";
	cin >> markiict;
	cout << "Your Marks In " << pf << " : ";
	cin >> markpf;
	cout << "Your Marks In " << la << " : ";
	cin >> markla;
	cout << "Your Marks In " << cag << " : ";
	cin >> markcag;
	cout << "Your Marks In " << ps << " : ";
	cin >> markps;
	cout << "Your Marks In " << ecc << " : ";
	cin >> markecc;
	cout << "Your Marks In " << oop << " : ";
	cin >> markoop;
	cout << "Your Marks In " << dld << " : ";
	cin >> markdld;
	cout << "Your Marks In " << df << " : ";
	cin >> markdf;
	cout << "Your Marks In " << ise << " : ";
	cin >> markise;
	cout << "Your Marks In " << cps << " : ";	
	cin >> markcps;
	
	
	// calculations
	
	//cgpa
	
	cgpa1 = (((( markiict + markpf + markla + markcag + markps + markecc )/totalmarks1)*100)/9.5) ;
	cgpa2 = (((( markoop + markdld + markdf + markise + markcps )/totalmarks2)*100)/9.5) ;
	
	//sgpa
	
	sgpa1 = ((((markiict * chiict) + (markpf * chpf) + (markla * chla) + (markcag * chcag) + (markps * chps) + (markecc * checc)) / totalchsem1 ) / 25);

	sgpa2 = ((((markoop * choop) + (markdld * chdld) + (markdf * chdf) + (markise * chise) + (markcps* chcps)) / totalchsem2 ) / 25);



	// Output Transcript
	
	
	//semester 1


	cout << setw(40) << "\n|¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬|";
	cout << setw(40) << "\n|                                   TRANSCRIPT                                 |";
	cout << setw(40) << "\n|______________________________________________________________________________|";
	cout << setw(28) << "\n| Name                : " << setw(20) << left << name << setw(36) <<right <<"|";
	cout << setw(28) << "\n| Registration Number : " << setw(20) << left << regNum << setw(36) <<right <<"|";
	cout << setw(28) << "\n| Section             : " << setw(20) << left << section << setw(36) <<right <<"|";
	cout << setw(28) << "\n|------------------------------------------------------------------------------|";
	
	cout << setw(40) << "\n|¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬|";
	cout << setw(40) << "\n|                                   SEMESTER 1                                 |";
	cout << setw(40) << "\n|______________________________________________________________________________|";
	cout             << "\n|                 Subject               |" << " Total Marks |" << " Obt Marks |" << " Credit Hrs |";
	cout << setw(1)  << "\n|---------------------------------------|-------------|-----------|------------|";
	cout << setw(1)  << "\n|" << setw(39) << left << iict <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markiict << setw(5) << "|" <<setw(7) <<right <<chiict << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << pf   <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markpf   << setw(5) << "|" <<setw(7) <<right << chpf << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << la   <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markla   << setw(5) << "|" <<setw(7) <<right << chla << setw(6) << "|" ; 
	cout << setw(1)  << "\n|" << setw(39) << left << cag  <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markcag  << setw(5) << "|" <<setw(7) <<right << chcag << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << ps   <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markps   << setw(5) << "|" <<setw(7) <<right << chps << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << ecc  <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markecc  << setw(5) << "|" <<setw(7) <<right << checc << setw(6) << "|" ;

	cout << setw(1)  << "\n|_______________________________________|_____________|___________|____________|";
	cout << setw(1)  << "\n|" << setw(7) << left << "CGPA" << setw(1) << "|" << setw(5) << setprecision(1) << fixed << right << cgpa1 <<setw(66) << "|";
	cout << setw(1)  << "\n|" << setw(7) << left << "SGPA" << setw(1) << "|" << setw(5) << setprecision(1) << fixed << right << sgpa1 <<setw(66) << "|";
	cout << setw(1)  << "\n|------------------------------------------------------------------------------|";

	//Semester 2

		cout << setw(40) << "\n|¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬|";
	cout << setw(40) << "\n|                                   SEMESTER 2                                 |";
	cout << setw(40) << "\n|______________________________________________________________________________|";
	cout             << "\n|                 Subject               |" << " Total Marks |" << " Obt Marks |" << " Credit Hrs |";
	cout << setw(1)  << "\n|---------------------------------------|-------------|-----------|------------|";
	cout << setw(1)  << "\n|" << setw(39) << left << oop <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markoop << setw(5) << "|" <<setw(7) <<right <<choop << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << dld   <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markdld   << setw(5) << "|" <<setw(7) <<right << chdld << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << df   <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markdf   << setw(5) << "|" <<setw(7) <<right << chdf << setw(6) << "|" ; 
	cout << setw(1)  << "\n|" << setw(39) << left << ise  <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markise  << setw(5) << "|" <<setw(7) <<right << chise << setw(6) << "|" ;
	cout << setw(1)  << "\n|" << setw(39) << left << cps   <<setw(6) << left << "|" <<setw(8) << "100" <<setw(1) << "|" <<setw(7) <<right <<markcps   << setw(5) << "|" <<setw(7) <<right << chcps << setw(6) << "|" ;


	cout << setw(1)  << "\n|_______________________________________|_____________|___________|____________|";
	cout << setw(1)  << "\n|" << setw(7) << left << "CGPA" << setw(1) << "|" << setw(5) << setprecision(1) << fixed << right << cgpa2 <<setw(66) << "|";
	cout << setw(1)  << "\n|" << setw(7) << left << "SGPA" << setw(1) << "|" << setw(5) << setprecision(1) << fixed << right << sgpa2 <<setw(66) << "|";
	cout << setw(1)  << "\n|------------------------------------------------------------------------------|";
	cout << endl << endl;





	return 0;



}

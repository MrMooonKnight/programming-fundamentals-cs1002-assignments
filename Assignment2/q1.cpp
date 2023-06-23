#include <iostream>

using namespace std;

int main()
{

	const float total_capacity = 1550;
	
	//water level increase per month from march to august.
	
	float increase = 0;
	
	//water lever decrease per month from september to february

	float decrease = 0;
	
	float current_level = 0;
	int current_month = 0;
	int current_year = 0;
	
	//Taking input From the User
	//input validation
	
	//water level
	cout << "\n---------------------------------------------------";
	cout << "\nEnter The Current Water Level : ";
	cin >> current_level;
	
	if (current_level > 1550)
	{ 	
		cout << "\nWater Level Is 1550 !" << endl << endl;
		current_level = total_capacity;
	} 
	
	if (current_level < 0)
	{ 	
		cout << "\nWater Level Cannot Be Zero" << endl << endl;
		cout << "\n---------------------------------------------------" << endl << endl;
		return 0;
	} 
	
	// Month
	
	cout << "\nEnter The Current Month : ";
	cin >> current_month;
	
	
	if ((current_month < 1) || (current_month > 12))
	{ 	
		cout << "\nInvalid Month !" << endl << endl;
		cout << "\n---------------------------------------------------" << endl << endl;
		return 0;
	} 
	
	//Year
	
	cout << "\nEnter The Current Year : ";
	cin >> current_year;

	
	//increase and decrease
	
	cout << "\nEnter The Decrease Rate From September To February : ";
	cin >> decrease;
	cout << "\nEnter The Increase Rate From March To August : ";
	cin >> increase;
	cout << "\n---------------------------------------------------";
	
	
	cout << endl << endl;
	
	// Water Level Calculations
	
	switch(current_month)
	{
		//January
		case(1) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 01-" <<current_year << endl;
				current_level = 0;		
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 01-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//February
		case(2) :
			current_level -= decrease;
			if(current_level <=0)
			{
			
				cout << "\nWater Level Will Be Zero On 02-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 02-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//March
		case(3) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 03-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 03-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//April
		case(4) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 04-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 04-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//May
		case(5) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 05-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 05-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//June
		case(6) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 06-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 06-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//July
		case(7) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 07-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 07-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//August
		case(8) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 08-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 08-" << current_year << endl;
				current_level = total_capacity;
			} 
		//September
		case(9) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 09-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 09-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//October
		case(10) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 10-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 10-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//November
		case(11) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 11-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 11-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//December
		case(12) : 
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 12-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 12-" << current_year << endl ;
				current_level = total_capacity;
			} 
			
			
			
			
		//         YEAR CHANGE
		
		
		//January
		case(13) :
			current_year += 1;
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 01-" <<current_year << endl;
				current_level = 0;		
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 01-" << current_year << endl << endl;
				current_level = total_capacity;
			} 
		//February
		case(14) :
			current_level -= decrease;
			if(current_level <=0)
			{
			
				cout << "\nWater Level Will Be Zero On 02-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 02-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//March
		case(15) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 03-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 03-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//April
		case(16) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 04-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 04-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//May
		case(17) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 05-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 05-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//June
		case(18) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 06-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 06-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//July
		case(19) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 07-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 07-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//August
		case(20) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 08-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 08-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//September
		case(21) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 09-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 09-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//October
		case(22) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 10-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 10-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//November
		case(23) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 11-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 11-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//December
		case(24) : 
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 12-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 12-" << current_year << endl;
				current_level = total_capacity;
			} 
			
		//         YEAR CHANGE
		
		
		//January
		case(25) :
			current_year += 1;
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 01-" <<current_year << endl;
				current_level = 0;		
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 01-" << current_year << endl << endl;
				current_level = total_capacity;
			} 
		//February
		case(26) :
			current_level -= decrease;
			if(current_level <=0)
			{
			
				cout << "\nWater Level Will Be Zero On 02-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 02-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//March
		case(27) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 03-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 03-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//April
		case(28) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 04-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 04-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//May
		case(29) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 05-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 05-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//June
		case(30) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 06-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 06-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//July
		case(31) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 07-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 07-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//August
		case(32) :
			current_level += increase;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 08-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 08-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//September
		case(33) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 09-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 09-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//October
		case(34) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 10-" << current_year << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 10-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//November
		case(35) :
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 11-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 11-" << current_year << endl ;
				current_level = total_capacity;
			} 
		//December
		case(36) : 
			current_level -= decrease;
			if(current_level <=0)
			{
				cout << "\nWater Level Will Be Zero On 12-" << current_year  << endl;
				current_level = 0;
			}
			if (current_level > 1550)
			{ 	
				cout << "\nWater Level Will Be Max On 12-" << current_year << endl;
				current_level = total_capacity;
			} 
			



	cout << "\n---------------------------------------------------" << endl << endl << endl;





	}



	return 0;
}

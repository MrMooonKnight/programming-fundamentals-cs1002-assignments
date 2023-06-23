#include <iostream>

using namespace std;

int main ()
{

	//Variables

	char food;
	char amount_food;

	string item ; 

	int food_choice;

	// MAIN MENU
	cout << "\n-----------------------------------------------------------" <<endl;
	cout << "\n• B= Burger \n• F= French Fries \n• P= Pizza \n• S= Sandwiches" <<endl;
	cin >> food;

	//SUB MENU
	switch(food)
	{	
	
	    //BURGER
	    case 'b' :    
	    case 'B' :
		    item = "Burger";


		    cout << "\n• "<<item<<" 1 Rs. 200 = 1 \n• "<<item<<" 2 Rs. 250 = 2 \n• "<<item<<" 3 Rs. 300 = 3 \n• "<<item<<" 4 Rs. 350 = 4"<<endl;
		    
		    
		    cin >> food_choice;
		    switch(food_choice)
		    {   
		        case 1 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 200 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 400 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 800 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;
		                }
		                break;
		        case 2 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 250 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 500 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1000 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;
		                }
		                break;
		        case 3 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 300 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 600 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1200 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;
		                }
		                break;
		        case 4 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 350 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 700 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1400 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
				default : cout <<"\nInvalid"<<endl<<endl;

		    }
		    break;
		
	    // FRENCH FRIES
	    case 'F' :    
	    case 'f' :
		    item = "French Fries";


		    cout << "\n• "<<item<<" 1 Rs. 200 = 1 \n• "<<item<<" 2 Rs. 250 = 2 \n• "<<item<<" 3 Rs. 300 = 3 \n• "<<item<<" 4 Rs. 350 = 4"<<endl;
		    
		    
		    cin >> food_choice;
		    switch(food_choice)
		    {   
		        case 1 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 200 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 400 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 800 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
		        case 2 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 250 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 500 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1000 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;
		                }
		                break;
		        case 3 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 300 RS "<<endl<<endl;
		                            break;
		                            

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 600 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1200 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;
		                }
		                break;
		        case 4 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 350 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 700 RS "<<endl<<endl;
		                            break;
		                    

		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1400 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
				default : cout <<"\nInvalid"<<endl<<endl;

		    }
		    break;


            // PIZZA
	    case 'p' :    
	    case 'P' :
		    item = "Pizza";


		    cout << "\n• "<<item<<" 1 Rs. 200 = 1 \n• "<<item<<" 2 Rs. 250 = 2 \n• "<<item<<" 3 Rs. 300 = 3 \n• "<<item<<" 4 Rs. 350 = 4"<<endl;
		    
		    
		    cin >> food_choice;
		    switch(food_choice)
		    {   
		        case 1 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 200 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 400 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 800 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
		        case 2 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 250 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 500 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1000 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
		        case 3 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 300 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 600 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1200 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;


		                }
		                break;
		        case 4 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 350 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 700 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1400 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
				default : cout <<"\nInvalid"<<endl<<endl;


		    }
		    break;

	    //SANDWITCH
	    case 'S' :    
	    case 's' :
		    item = "Sandwitches";


		    cout << "\n• "<<item<<" 1 Rs. 200 = 1 \n• "<<item<<" 2 Rs. 250 = 2 \n• "<<item<<" 3 Rs. 300 = 3 \n• "<<item<<" 4 Rs. 350 = 4"<<endl;
		    
		    
		    cin >> food_choice;
		    switch(food_choice)
		    {   
		        case 1 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 200 RS "<<endl<<endl;
		                            break;    
		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 400 RS "<<endl<<endl;
		                            break;
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 800 RS "<<endl<<endl;
		                            break;

							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
		        case 2 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 250 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 500 RS "<<endl<<endl;
		                            break;
		                    
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1000 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
		        case 3 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 300 RS "<<endl<<endl;
		                            break;

		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 600 RS "<<endl<<endl;
		                            break;
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1200 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;

		                }
		                break;
		        case 4 : 
		                cout<< "• For 1 "<<item<<" = A \n• For 2 "<<item<<" = B\n• For 4 "<<item<<" = C" << endl;
		                cin >> amount_food;
		                
		                switch (amount_food)
		                {
		                    case 'A' :
		                    case 'a' :
		                            cout << "\n\nYour total bill is = 350 RS "<<endl<<endl;
		                            break;
		                    case 'B' :
		                    case 'b' :
		                            cout << "\n\nYour total bill is = 700 RS "<<endl<<endl;
		                            break;
		                    case 'C' :
		                    case 'c' :
		                            cout << "\n\nYour total bill is = 1400 RS "<<endl<<endl;
		                            break;
							default : cout <<"\nInvalid"<<endl<<endl;
		                }
		                break;
				default : cout <<"\nInvalid"<<endl<<endl;


		    }
		    break;
		default : cout <<"\nInvalid"<<endl<<endl;

	}
	cout << "\n-----------------------------------------------------------" <<endl;



	return 0;
}

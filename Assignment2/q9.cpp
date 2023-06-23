#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	
	const string imran_k = "Imran Khan enclosure"; // VIP
	const string javed_m = "Javed Miandad enclosure"; // VIP
	const string javed_a = "Javed Akhter enclosure";  // VIP
	const string azhar_m = "Azhar Mehmood enclosure"; // VIP
	
	const string sohaib_a = "Shoaib Akhtar enclosure"; // Premium
	const string sohail_t = "Sohail Tanveer enclosure"; //First Class
	const string imran_b = "Imran Buksh enclosure";  //  General
	const string yasir_a = "Yasir Arafat enclosure"; //General
	
	
	//Night Matches
	const string match1 = "27 February 2020 | Islamabad United v Quetta Gladiators (7 pm-10.15 pm)"; 
	const string match2 = "28 February 2020 | Peshawar Zalmi v Lahore Qalandars (7 pm-10.15 pm)";
	const string match3 = "29 February 2020 | Islamabad United v Peshawar Zalmi (7 pm-10.15 pm)";
	const string match4 = "1 March 2020 | Islamabad United v Karachi Kings (7 pm-10.15 pm)";
	const string match5 = "2 March 2020 | Peshawar Zalmi v Karachi Kings (7 pm-10.15 pm)";
	const string match6 = "5 March 2020 | Peshawar Zalmi v Quetta Gladiators (7 pm-10.15 pm)";
	//Day Matches
	const string match7 = "7 March 2020 | Peshawar Zalmi v Islamabad United (2 pm-5.15 pm)";
	const string match8 = "8 March 2020 | Multan Sultans v Islamabad United (2 pm-5.15 pm)";
	
	
	//Ticket Prices
	const string tmatch1 = "(VIP – Rs. 3000, Premium – Rs. 1500, First-class – Rs. 1000, General – Rs. 500)";
	const string tmatch2 = "(VIP – Rs. 3000, Premium – Rs. 1500, First-class – Rs. 1000, General – Rs. 500)";
	const string tmatch3 = "(VIP – Rs. 3000, Premium – Rs. 1500, First-class – Rs. 1000, General – Rs. 500)";
	
	const string tmatch4 = "(VIP – Rs. 2000, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)";
	const string tmatch7 = "(VIP – Rs. 2000, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)";
	
	const string tmatch5 = "(VIP – Rs. 1500, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)";
	const string tmatch6 = "(VIP – Rs. 1500, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)";	
	const string tmatch8 = "(VIP – Rs. 1500, Premium – Rs. 1000, First-class – Rs. 500, General – Rs. 250)";
	
	int seats1;
	int seats2;
	int seats3;
	int seats4;
	int seats5;
	int seats6;
	int seats7;
	int seats8;
	int seats9;
	
	
	;
	srand(time(0));
	seats1 = rand() % (950) + 15;
	srand(time(0));
	seats2 = rand() % (975) + 15;
	srand(time(0));
	seats3 = rand() % (1000) + 15;
	srand(time(0));
	seats4 = rand() % (989) + 15;
	srand(time(0));
	seats5 = rand() % (1005) + 15;
	srand(time(0));
	seats6 = rand() % (1001) + 15;
	srand(time(0));
	seats7 = rand() % (1100) + 15;
	srand(time(0));
	seats8 = rand() % (1200) + 15;
	
	
	
	int price_vip_123 = 3000; 
	int price_pm_123 = 1500;
	int price_fc_123 = 1000;
	int price_gn_123 = 500;
	
	int price_vip_47 = 2000; 
	int price_vip_568 = 1500; 
	int price_pm_45678 = 1000;
	int price_fc_45678 = 500;
	int price_gn_45678 = 250;
	
	
	//Input Variables
	int matchchoice;
	int enc_choice;
	int family_ticket;
	int adults;
	int children;
	int price;
	int rebate;
	
	string cnic;
	
	
	
	cout << "\n 1. " << match1;
	cout << "\n 2. " << match2;
	cout << "\n 3. " << match3;
	cout << "\n 4. " << match4;
	cout << "\n 5. " << match5;
	cout << "\n 6. " << match6;
	cout << "\n 7. " << match7;
	cout << "\n 8. " << match8;
	cout << endl;
	
	cout << "\nEnter Your Choice (1 - 8) : ";
	cin >> matchchoice;
	if ((matchchoice < 1) || (matchchoice > 8))
		{
		cout << "\nInvalid Choice" <<endl <<endl <<endl;
		return 0;
		}


	switch(matchchoice)
	{ 
		// MATCH 1
	 	case 1 :	cout << "\n 1. (VIP) " << imran_k << "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m << "   Seats Available : "  <<seats2;
				cout << "\n 3. (VIP) " << javed_a << "   Seats Available : "  <<seats3;
				cout << "\n 4. (VIP) " << azhar_m << "   Seats Available : "  <<seats4;
				cout << "\n 5. (Premium) " << sohaib_a << "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t << "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b << "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a << "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch1 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_123) + (children * price_pm_123);
								rebate = ((adults * price_pm_123) * 0.10 ) + ((children * price_pm_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
								break;
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_123) + (children * price_fc_123);
								rebate = ((adults * price_fc_123) * 0.10 ) + ((children * price_fc_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_123) + (children * price_gn_123);
								rebate = ((adults * price_gn_123) * 0.10 ) + ((children * price_gn_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
									if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_123) + (children * price_gn_123);
								rebate = ((adults * price_gn_123) * 0.10 ) + ((children * price_gn_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
					
					}
				break;
		// MATCH 2
		case 2 :
				cout << "\n 1. (VIP) " << imran_k << "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m << "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a << "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a << "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t << "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a << "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch2 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_123) + (children * price_pm_123);
								rebate = ((adults * price_pm_123) * 0.10 ) + ((children * price_pm_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_123) + (children * price_fc_123);
								rebate = ((adults * price_fc_123) * 0.10 ) + ((children * price_fc_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_123) + (children * price_gn_123);
								rebate = ((adults * price_gn_123) * 0.10 ) + ((children * price_gn_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_123) + (children * price_gn_123);
								rebate = ((adults * price_gn_123) * 0.10 ) + ((children * price_gn_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
							break;
			}
		// MATCH 3
		case 3 :
				cout << "\n 1. (VIP) " << imran_k <<  "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m <<  "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a <<  "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a <<  "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t <<  "   Seats Available : " << seats6;
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a <<  "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch3 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k  ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_123) + (children * price_vip_123);
								rebate = ((adults * price_vip_123) * 0.10 ) + ((children * price_vip_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_123) + (children * price_pm_123);
								rebate = ((adults * price_pm_123) * 0.10 ) + ((children * price_pm_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_123) + (children * price_fc_123);
								rebate = ((adults * price_fc_123) * 0.10 ) + ((children * price_fc_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_123) + (children * price_gn_123);
								rebate = ((adults * price_gn_123) * 0.10 ) + ((children * price_gn_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_123) + (children * price_gn_123);
								rebate = ((adults * price_gn_123) * 0.10 ) + ((children * price_gn_123) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_123;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
							break;
			}
		//Match 4
		case 4 :
				cout << "\n 1. (VIP) " << imran_k <<  "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m <<  "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a <<  "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a <<  "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t <<  "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a <<  "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch4 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_45678) + (children * price_pm_45678);
								rebate = ((adults * price_pm_45678) * 0.10 ) + ((children * price_pm_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_45678) + (children * price_fc_45678);
								rebate = ((adults * price_fc_45678) * 0.10 ) + ((children * price_fc_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
							break;
			}
	
		//Match 5
		case 5 :
				cout << "\n 1. (VIP) " << imran_k <<  "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m <<  "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a <<  "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a <<  "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t <<  "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a <<  "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch5 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_45678) + (children * price_pm_45678);
								rebate = ((adults * price_pm_45678) * 0.10 ) + ((children * price_pm_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_45678) + (children * price_fc_45678);
								rebate = ((adults * price_fc_45678) * 0.10 ) + ((children * price_fc_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
					}
		
		//Match 6
		case 6:
				cout << "\n 1. (VIP) " << imran_k <<  "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m <<  "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a <<  "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a <<  "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t <<  "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a <<  "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch6 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_45678) + (children * price_pm_45678);
								rebate = ((adults * price_pm_45678) * 0.10 ) + ((children * price_pm_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_45678) + (children * price_fc_45678);
								rebate = ((adults * price_fc_45678) * 0.10 ) + ((children * price_fc_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
					}
		
		//Match 7
		case 7 :
				cout << "\n 1. (VIP) " << imran_k <<  "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m <<  "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a <<  "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a <<  "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t <<  "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a <<  "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch7 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_47) + (children * price_vip_47);
								rebate = ((adults * price_vip_47) * 0.10 ) + ((children * price_vip_47) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_45678) + (children * price_pm_45678);
								rebate = ((adults * price_pm_45678) * 0.10 ) + ((children * price_pm_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_45678) + (children * price_fc_45678);
								rebate = ((adults * price_fc_45678) * 0.10 ) + ((children * price_fc_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
					}

		//Match 8
		case 8 :
				cout << "\n 1. (VIP) " << imran_k <<  "   Seats Available : " << seats1;
				cout << "\n 2. (VIP) " << javed_m <<  "   Seats Available : " << seats2;
				cout << "\n 3. (VIP) " << javed_a <<  "   Seats Available : " << seats3;
				cout << "\n 4. (VIP) " << azhar_m <<  "   Seats Available : " << seats4;
				cout << "\n 5. (Premium) " << sohaib_a <<  "   Seats Available : " << seats5;
				cout << "\n 6. (First Class) " << sohail_t <<  "   Seats Available : " << seats6;	
				cout << "\n 7. (General) " << imran_b <<  "   Seats Available : " << seats7;
				cout << "\n 8. (General) " << yasir_a <<  "   Seats Available : " << seats8;
				cout << "\n Prices : " << tmatch5 << endl;
				cout <<	"\n\n Choose Your Enclosure (1 - 8) : ";
				cin >> enc_choice;
				if ((enc_choice < 1) || (enc_choice > 8))
					{
					cout << "\nInvalid Choice" <<endl <<endl <<endl;
					return 0;
					}
				switch(enc_choice)
					
					{ // ENCLOSURE 1
					case 1 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (VIP) " << imran_k ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}
								break;
					// ENCLOSURE 2
					case 2 : 	cout << "\n You Have Chosen : ";
							cout << "\n 2. (VIP) " << javed_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}			
					// ENCLOSURE 3
					case 3 : 	cout << "\n You Have Chosen : ";
							cout << "\n 3. (VIP) " << javed_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_47;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;					
					// ENCLOSURE 4
					case 4 : 	cout << "\n You Have Chosen : ";
							cout << "\n 4. (VIP) " << azhar_m ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_vip_568) + (children * price_vip_568);
								rebate = ((adults * price_vip_568) * 0.10 ) + ((children * price_vip_568) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_vip_568;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;		
					// ENCLOSURE 5
					case 5 : 	cout << "\n You Have Chosen : ";
							cout << "\n 5. (Premium) " << sohaib_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_pm_45678) + (children * price_pm_45678);
								rebate = ((adults * price_pm_45678) * 0.10 ) + ((children * price_pm_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_pm_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 6
					case 6 : 	cout << "\n You Have Chosen : ";
							cout << "\n 6. (First Class) " << sohail_t ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_fc_45678) + (children * price_fc_45678);
								rebate = ((adults * price_fc_45678) * 0.10 ) + ((children * price_fc_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_fc_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
					// ENCLOSURE 7
					case 7 : 	cout << "\n You Have Chosen : ";
							cout << "\n 7. (General) " << imran_b ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}	
								break;	
				
					// ENCLOSURE 8
					case 8 : 	cout << "\n You Have Chosen : ";
							cout << "\n 1. (General) " << yasir_a ;
							cout << "\n Do Want Family Tickets ? Press 1 for \"YES\" and 0 for \"NO\" : ";
							cin >> family_ticket;
							
							// FAMILY TICKET
							if (family_ticket == 1)
								{
								cout << "\n Enter Your CNIC Number : ";
								cin >> cnic;
								
								cout <<"\n Enter Number Of Adults (Max 4) : ";
								cin >> adults;
								//Validation
								if(adults > 4)
									{cout << "\n Max Number Of Adults Is 4";
									return 0;}
										else if (adults < 1)
											{cout << "\n Min Number Of Adults Is 1";
											return 0;}
								
								cout <<"\n Enter The Number Of Children (Max 5) : ";
								cin >> children;
								//Validation
								if(children > 5)
									{cout << "\n Max Number Of Children Is 5";
									return 0;}
										else if (adults < 1)
											{cout << "\n Children Cannot Be Zero.";
											return 0;}											
											
								// TICKETS PRICE CALCULATION 
								
								price = (adults * price_gn_45678) + (children * price_gn_45678);
								rebate = ((adults * price_gn_45678) * 0.10 ) + ((children * price_gn_45678) * 0.20 );							
								cout << "\nThe Price Is : Rs." << price; 
								cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;	
											
											
								// NON FAMILY TICKET 			
								} else if (family_ticket == 0)
									{
									cout << "\n Enter Your CNIC Number : ";
									cin >> cnic;
									cout <<"\n Enter Number Of Adults (Max 8) : ";
									cin >> adults;
									//Validation
									if(adults > 8)
										{cout << "\n Max Number Of Adults Is 8.";
										return 0;}
											else if (adults < 1)
												{cout << "\n Min Number Of Adults Is 1.";
												return 0;}							
									// TICKETS PRICE CALCULATION 
									
									price = adults * price_gn_45678;
									if (adults > 4)
										{rebate = price * 0.10;
									
										cout << "\nThe Price Is : Rs." << price; 
										cout << "\nThe Rebate Amount Is : Rs." << rebate << endl << endl;
										}  else 
											cout << "\nThe Price Is : Rs." << price << endl << endl; 
									}		
					}
	
	
	}

		




	return 0;
	
	
	
	



}

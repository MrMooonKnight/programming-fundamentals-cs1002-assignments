#include <iostream>

using namespace std;

int main()
{
	
	
	short input = 0;	
	short opcode = 0;
	short output = 0;

	short rightop = 0;
	short leftop = 0;

	cout << "\n------------------------------------" << endl;
	cout << "\nEnter The Input : ";
	cin >> input;
	
	rightop = input & 63;
	leftop = input >> 6;
	leftop = leftop & 63;
	
	opcode = input >> 12;
	cout << "\n------------------------------------" << endl;

	switch(opcode)
	{
		case 0 : 
				output = input & 63;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nDisplay Value of Right Operand : " << output << endl << endl ;
				break;
		case 1 : 
				output = input >> 6;
				output = output & 63;	
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nDisplay Value of Left Operand : " << output << endl << endl ;
				break; 
		case 2 : 
				output = input ^ 63;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nTake (6-bit) Random input in Right operand : " << output << endl << endl ;
				break;
		case 3 :
				output = input ^ 4032;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nTake (6-bit) Random input in Left operand : " << output << endl << endl ;
				break;
		case 4 : 
				output = rightop + leftop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nAdd Left and Right operand : " << output << endl << endl ;
				break;
		case 5 : 
				cout << "\nOpcode is : " << opcode << endl;
				if (leftop > rightop)
				{
					output = leftop - rightop;
					cout << "\nLeft Operand Is Greater.";
					cout << "\nCalculate Subtraction of operands : " << output << endl << endl ;
				} 
				else
				{
					output = rightop - leftop;
					cout << "\nRight Operand Is Greater.";
					cout << "\nCalculate Subtraction of operands : " << output << endl << endl ;
				}
				break;
		case 6 : 
				output = leftop * rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nMultiply Left and Right operand : " << output << endl << endl ;
				break;
		case 7 : 
				cout << "\nOpcode is : " << opcode << endl;
				if (leftop > rightop)
				{
					output = leftop / rightop;
					cout << "\nLeft Operand Is Greater.";
					cout << "\nCalculate division of operands : " << output << endl << endl ;
				} 
				else
				{
					output = rightop / leftop;
					cout << "\nRight Operand Is Greater.";
					cout << "\nCalculate division of operands : " << output << endl << endl ;
				}
				break;
		case 8 : 
				cout << "\nOpcode is : " << opcode << endl;
				if (leftop > rightop)
				{
					output = leftop % rightop;
					cout << "\nLeft Operand Is Greater.";
					cout << "\nCalculate remainder of operands : " << output << endl << endl ;
				} 
				else
				{
					output = rightop % leftop;
					cout << "\nRight Operand Is Greater.";
					cout << "\nCalculate remainder of operands : " << output << endl << endl ;
				}
				break;
		case 9 : 
				output = leftop | rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nBitwise OR of Left and Right operand : " << output << endl << endl ;
				break;
		case 10 : 
				output = leftop & rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nBitwise AND of Left and Right operand : " << output << endl << endl ;
				break;
		case 11 : 
				output = leftop ^ rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nBitwise XOR of Left and Right operand : " << output << endl << endl ;
				break;
		case 12 : 
								output = ~ rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nComplement of Right operand : " << output << endl << endl ;
				break;
	
		case 13 : 
							output = ~ leftop ;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nComplement of Left operand : " << output << endl << endl ;
				break;
	
		case 14 : 
				output = leftop << rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nLeft Operand << Right Operand : " << output << endl << endl ;
				break;

		case 15 : 
				output = leftop >> rightop;
				cout << "\nOpcode is : " << opcode << endl;
				cout << "\nLeft Operand >> Right Operand : " << output << endl << endl ;
				break;


	}
		
		cout << "\n------------------------------------" << endl<< endl<< endl;




















	return 0;
}

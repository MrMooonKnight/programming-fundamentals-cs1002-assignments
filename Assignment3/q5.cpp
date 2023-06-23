#include <iostream>

using namespace std;

int main()

{

	// DISPLAYS
	
	int output = 1;
	int space = 0;
	
	// OUTPUTS AND CONTROLLERS ETC
	
	int oi;
	int i = 0;
	int si = 4;
	
	cout << endl << endl;
	
	// OUTPUT
	
	while(i < 5)
	{
	
		while(space < si)
		{
			cout << " ";
			space ++;
		}
		while(oi < output)
		{
			cout << output; 
			oi ++;
		}
	
	cout << endl;
	i ++;
	si --;
	space = 0;
	output++;
	oi = 0;
	
	}

	cout << endl << endl;

	return 0;
}

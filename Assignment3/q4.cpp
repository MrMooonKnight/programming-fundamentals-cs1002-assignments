#include <iostream>

using namespace std;

int main()

{

	// DISPLAYS

	int hash1 = 0;
	int hash2 = 0;
	int space = 0;
	
	// COUNTERS AND ITERATIONS ETC
	
	int i = 0;
	int x = 0;
	int y = 0;
	
	cout << endl << endl;
	
	// OUTPUT
	
	while(i < 6)
	{
		while(hash1 < 1)
		{
			cout << "#";
			hash1 ++;
			
		}
		
		while(space < 0)
		{
			cout << " ";
			space ++;
		}
		
		while(hash2 < 1)
		{
			cout << "#";
			hash2 ++;
		}
		
		i++;
		cout << endl;
		hash1 = 0;
		hash2 = 0;
		x -= 1;
		space = x;
	
	
	}
	
	cout << endl << endl;

	return 0;
}

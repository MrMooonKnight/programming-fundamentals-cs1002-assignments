#include <iostream>

using namespace std;

int main()

{
	
	int exc = 0;
	int bslash = 0;
	int fslash = 0;
	int i = 0;
	int w = 0;
	int x = 0;
	
	cout << endl << endl;
				
	while(i < 6)
	{
		// LOOP FOR BACK SLASHES
		while(bslash < 0)
		{
			cout << "\\\\";
			bslash ++;
		}
		// LOOP FOR EXCLAMATIONS
		while(exc < 11)
		{
			cout << "!!";
			exc ++;
		}
		// LOOP FOR FORWARD SLASHES
		while(fslash < 0)
		{
			cout << "//";
			fslash ++;
		}
		
		w += 2;
		exc = w;
		x -= 1;
		fslash = x;
		bslash = x;
		i++;
		
		cout << endl;
	}

	cout << endl << endl;

	return 0;
}

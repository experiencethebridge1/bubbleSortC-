
/* Using bubble sort alg to demonstrate processing time of n elements.  Considering 16KB default stack 
* threshhold, limiting element max to 4096 integers (4 bytes for int type).  
*
* Sean O'Brien, C++, 8.6.2019
*/


#include<iostream>
#include <ctime>
using namespace std;

int main()
{
	// 4088 of 4096 integer (and double) types ((2^10) * 16 / 4) fit in default stack of 16384 bytes
	int a[4088], n, i, j, temp;
 
	cout << "Enter the size of array (Max size for int is 4088): ";
	cin >> n;
	//cout << "Enter the array elements: ";  // this is incase of manual entry

	// Using time as random seed
	srand((unsigned)time(NULL));
	
	// Create an array of n elements of random int
	for (i = 0; i < n; ++i)
		//cin >> a[i]; // this is incase of manual entry
	{
		// Random number selection 1 - 100
		a[i] = 1 + rand() % 100;
		// Displays random number selection across n elements
		cout << a[i] << endl; 
	}

	// Reads array of n elements of random int
	for (i = 1; i < n; ++i)
	{
		// Bubble sorts array of n elements of random int
		for (j = 0; j < (n - i); ++j)
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	}

	 
	cout << "\nArray after bubble sort:" << endl;
	// Displays sorted n array 
	for (i = 0; i < n; ++i)
		cout << " " << a[i];
	cout << endl; 
	return 0;
}


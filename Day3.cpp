/*If input is odd, it is weird
if it is even AND it is within 2 or 5 inclusive, it is not weird {2,4}
if it is even and it is within 6 or 20 inclusive, it is weird {6,8,10,12,14.16,18,20} 
If it is even and greater than 20 it is not weird 
*/

#include <iostream> 
using namespace std; 

int main()
{
	int n;
	cin >> n;

	if (n % 2 == 1)
	{
		cout << "Weird";
	}
	else if ((n % 2 == 0) && n >= 2 && n <= 5)
	{
		cout << "Not Weird";
	}
	else if ((n % 2 == 0) && n >= 6 && n <= 20)
	{
		cout << "Weird";
	}
	else
	{
		cout << "Not Weird";
	}
	return 0; 
}

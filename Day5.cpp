/*Goven an integer, n, print its first 10 multiples. Each multiple n x i Iwhere 1<=i<=10) should be printed on a new line in the form n x i = result. */

#include <iostream> 
using namespace std; 

int main()
{
	int n, i; 

	cin >> n; 

	for (i = 1; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << n * i << endl;
	}

	return 0; 
}

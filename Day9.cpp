/*Write a factorial function that takes a positive integer, N and prints out the results of N! */

#include <iostream>
using namespace std; 

int factorial(int n); 

int main()
{
	int n; 

	cin >> n; 

	cout << factorial(n); 
	return 0; 
}

int factorial(int n){
	int o = 1;
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1); 
	}
}

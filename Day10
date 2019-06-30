/*Given a base-10 integer n, convert it to binary ase 2. Then find and print hthe base 10 integer denoting the maximum number of consecuive 1's in n's binary representation */

#include <iostream> 
#include <vector> 
using namespace std;

int main()
{
	int n; 
	cin >> n; 
	vector <int> binaryValue;  
	
	while (n > 0) {
		if (n % 2 == 0) {
			binaryValue.push_back(0); 
			n = n / 2; 
		}
		else {
			binaryValue.push_back(1); 
			n = n / 2; 
		}
		//cout << n << endl; 

	}
	for (int counter = binaryValue.size()-1; counter >= 0; counter--) {
		cout << binaryValue[counter]; 
	}
	cout << endl << endl; 
	int consecutives = 0; 
	int bestScore = 0; 
	for (int counter = binaryValue.size() - 1; counter > 0; counter--)
	{
		//cout << counter << endl;
		if (counter-1 == 0 && binaryValue[0] == 1)
		{
			consecutives++;
			if (consecutives > bestScore)
			{
				bestScore = consecutives;
			}
			//cout << "third " << endl;

		}
		if (binaryValue[counter] == 1 && binaryValue[counter - 1] == 1) {
			consecutives++;
			//cout << "first " << endl; 
		}
		else if (binaryValue[counter] == 1 && binaryValue[counter - 1] == 0)
		{
			consecutives++;
			bestScore = consecutives;
			consecutives = 0;
			//cout << "second " << endl; 
		}

		else {
			//do nothing 
		}
	}
	cout << bestScore << endl; 
	return 0; 
} 

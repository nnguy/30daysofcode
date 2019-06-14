//Given the meal price, the tip percentage, and the tax ercent (the percentage of te meal price being added as tax) for a meal, find and print the meal's total cost. 

#include <iostream> 
using namespace std; 

int main()
{
	double mealCost = 0;
	int tipPercent;
	int taxPercent;
	double costBeforeRounding; 
	int totalCost;

	cin >> mealCost >> tipPercent >> taxPercent;
	double tip = (mealCost * tipPercent)/100; 
	//cout << tip << endl; 
	double tax = (mealCost * taxPercent) / 100; 
	//cout << tax << endl; 
	costBeforeRounding = mealCost + tip + tax;
	if (costBeforeRounding - (int)costBeforeRounding >= 0.5)
	{
		costBeforeRounding += 1 - ((costBeforeRounding - (int)costBeforeRounding)); 
	}
	else
	{
		costBeforeRounding -= (costBeforeRounding - (int)costBeforeRounding); 
	}

	cout << costBeforeRounding << endl;


	return 0; 



	
}

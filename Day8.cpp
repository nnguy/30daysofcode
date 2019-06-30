/*Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 

You will be given an unknown number of names to query your phonebook for. 

For each name queried, print the associated entry from you phone book on a new line in the form name=phoneNumber; 

If the entry for name is not found, prin Not Found instead. */

#include <iostream> 
#include <iterator> 
#include <map> 
#include <string> 

using namespace std; 
void printmap(map<string, string> x); 
void readmap(map<string, string> x, int n); 

int main()
{
	//empty map container containing string, string. 
	map <string, string> phonebook; 

	//declare size of map 
	int n; 
	cout << "Enter number of queries" << endl; 
	cin >> n; 

	cin.ignore(); 
	//insert elements 
	readmap(phonebook, n); 
	
	string insertKeyHere; 
	while (getline(cin, insertKeyHere))
	{
		cout << insertKeyHere << phonebook[insertKeyHere] << endl; 
		//cout << insertKeyHere << "'s value is " << phonebook.at(insertKeyHere) << endl; 
	}


	//printmap(phonebook); 
	return 0; 
}
void readmap(map<string, string> x, int n) {
	int counter;
	string name; 
	string phonenumber; 
	
	for (counter = 0; counter < n; counter++)
	{
		cout << "Enter key number " << counter + 1 << endl; 
		getline(cin, name); 
		cout << "Enter value for key " << name << endl; 
		getline(cin, phonenumber); 
		x.insert(pair<string, string>(name, phonenumber)); 
		cout << x.at(name) << endl; 
	}
	

}
void printmap(map<string, string> x) {
	map <string, string>::iterator itr;
	cout << "\nThe map phonebook is: \n";
	cout << "\tKey\tElement\n"; 
	
	for (itr = x.begin(); itr != x.end(); itr++)
	{
		cout << "\t" << itr->first << "\t" << itr->second << "\n"; 
		cout << endl; 
	}
}

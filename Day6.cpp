/*Given a string s of length N that is indexed from 0 to N-1, pritn its even-indexed and odd-indexed characters as 2 space-separated strigns on a single line. 0 is considered to be an even index. */

#include <iostream>
#include <string> 
using namespace std; 

int main()
{
    int t; 
    cin >> t; 
    cin.ignore(); 
    string* x = new string[t];
    string s;
    int counter = 0; 
    for (counter = 0; counter < t; counter++)
    {
        //cout << "You will enter " << t << " strings" << endl;
        //cout << "Please enter string number " << counter + 1 << endl; 
        getline(cin, s); 
        x[counter] = s; 
    }
    //for (counter = 0; counter < t; counter++)
    //{
    //    cout << x[counter] << endl; 
    //}

    int z; 
    for (counter = 0; counter < t; counter++)
    {
        for (z = 0; z < x[counter].length(); z++)
        {
            if (z % 2 == 0)
            {
                cout << x[counter].at(z);
            }
        }
        cout << " "; 
        for (z = 0; z < x[counter].length(); z++)
        { 
            if (z % 2 == 1)
            {
                cout << x[counter].at(z); 
            }
        }
        cout << endl; 
            
    }
    return 0; 
}

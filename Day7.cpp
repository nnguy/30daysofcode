#include <iostream>
using namespace std; 

int main()
{
    int* p = nullptr;
    int n;
    cin >> n;
    p = new int [n]; 
    int counter;
    for (counter = 0; counter < n; counter++)
    {
        cin >> p[counter]; 
    }
    
    for (counter = n - 1; counter >= 0; counter--)
    {
        cout << p[counter] << " ";
    }
    return 0; 
}

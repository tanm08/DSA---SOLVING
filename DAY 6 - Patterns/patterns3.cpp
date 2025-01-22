#include <iostream>

using namespace std;

int main()
{
    // Inverted Star Pattern
    int n;
    cout << "Enter the Number = ";
    cin >> n;

    // Outer Loop 
    for(int i=1; i<=n; i++)
    {
        // Inner Loop
        for(int j=n; j>=i; j--)
        {
            // Work
            cout << "*" << " ";
        }

        cout << endl;

    }

    return 0;

}
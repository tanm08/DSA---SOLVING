#include <iostream>

using namespace std;

int main(){
    //Inverted & Rotated Half-Pyramid
    // Number of lines you want to print
    int n;
    cout << "Enter the number = ";
    cin >> n;
    // Outer Loop
    for(int i=1; i<=n; i++)
    {
        // Inner Loop
        for(int j=1; j<=n; j++)
        {
            // Work
            if (i+j<=4)
            {
                cout << "  ";
            }else{
                cout << "* ";
            }
            
        }

        cout << endl;

    }

    return 0;
}
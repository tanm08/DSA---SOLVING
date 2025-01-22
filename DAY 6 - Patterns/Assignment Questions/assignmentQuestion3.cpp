#include <iostream>

using namespace std;

int main(){
    //Palindromic Pattern
    int n;
    cout << "Enter the Number = ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (i+j<=n)
            {
                cout<<"  ";
            }else{
                cout<< n-j+1 << " ";
            }
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }
        
        cout<<endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the Number = ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if (i+j<=n)
            {
                cout<<"  ";
            }else{
                cout <<"* ";
                } 
        }
        for(int j=n-1; j>=i; j--){
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}
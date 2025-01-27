#include <iostream>

using namespace std;

//pass by value
// void changeA(int para){
//     int a = 25;
//     cout << a << endl;
// }

//pass by pointer
// void changeA(int *para){
//      *para = 25;
//      cout << *para << endl;
//     }

//pass by reference
void changeA(int &para){
     para = 25;
     cout << para << endl;
    }
int main(){

//     int a = 10;
//     int b = 5;
//     int *ptr = &a; // Declaration of the pointer
//     int **pptr = &ptr; // Declaring Pointer of pointer




//     cout << ptr << " = " << &a << "\n";
//     cout << &a << " is address of a" << "\n";

//     cout << a << endl;
//     cout << *ptr << endl; //dereferencing the value
//     cout << ptr << endl;
//     cout << &a << endl; //printing the address
//     cout << pptr << " = " << &ptr << endl;


//     // changing the value of the variable using the dereferencing operator

//     *ptr = 20;
//     cout << "value of a = " << a << endl;

//     //Learning about the null pointer 
//     int *ptr3 = NULL;
//     cout << ptr3 << endl;
//    // cout << *ptr3 << endl;  segmentation fault
//     //Doesnot execute the code due to segmentation fault
//     // cout << "bye bye";

// pass by value and pass by reference
    int a = 10;
    changeA(a);

    cout << "value of a " << a;

    return 0;
}
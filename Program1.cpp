//Write a Program that inputs a no. in an integer variable. It stores the address of the variable and then displays the value and address of the variable.
#include <iostream>
using namespace std;
int main() {
   int n;
   int *ptr;
   cout << "Enter an integer: ";
   cin >> n;
   ptr = &n;
   cout << "The value of n: " << n << endl;
   cout << "The address of n: " << ptr << endl;
    return 0;
}
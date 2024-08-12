#include <iostream>
using namespace std;

int main(){
    // Taking two variables from the user:
    
    int a,b;
    cout<< "Enter a number a: ";
    cin>> a;
    cout<< "Enter another number b: ";
    cin>> b;
    
    // Now we can use arithmetic operators to swap two variables.
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    // This method is known as carry over method to swap two variables.
    
    cout<< "\nAfter swapping,\nNow a is: " << a << "\n";
    cout<< "And b is: " << b << "\n";
    
    return 0;
}

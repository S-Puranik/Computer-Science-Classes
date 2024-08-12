#include <iostream>
using namespace std;

int main() {
    
    int a, b, num;
    
    cout<< "Enter a number: ";
    cin>> a;
    cout<< "Enter another number: ";
    cin>> b;
    
    //Using ternary operator:
    
    num = (a > b) ? a : b;
    
    cout << "\nThe larger number is: " << num;
    
    return 0;
}

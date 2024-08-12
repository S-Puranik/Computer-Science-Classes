#include <iostream>
using namespace std;

int main(){
    
    //Using string to calculate the sum of all numbers individually.
    
    string num;
    int a,b,c,d,sum;
    cout<< "Enter a four-digit number: ";
    getline(cin, num);
    
    // Assigning a variable for each number in the string.
    
    a = num[0]-'0'; // " -‘0’ " is added so that it doesn't read the ASCII instead of the number.
    b = num[1]-'0';
    c = num[2]-'0';
    d = num[3]-'0';
    
    // Now adding each number:
    
    sum = a+b+c+d;
    
    cout<< "\n The sum of all numbers is: " << sum;
    
    return 0;
}

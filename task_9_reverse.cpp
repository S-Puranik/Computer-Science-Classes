#include <iostream>
using namespace std;

int main(){
    
    //Using string to reverse the numbers individually.
    
    string num;
    int a,b,c,d;
    cout<< "Enter a four-digit number: ";
    getline(cin, num);
    
    // Assigning a variable for each number in the string.
    
    a = num[0]-'0'; // "-0" is added so that it doesn't read the ASCII in the bracket
    b = num[1]-'0';
    c = num[2]-'0';
    d = num[3]-'0';
    
    // Now reversing the string:
    
    cout<< "\n The reverse of the number is: " << d << c << b << a;
    
    return 0;
}

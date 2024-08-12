#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float ci, p, r, n, t;
    
    cout<< "Enter the principal amount: ";
    cin >> p;
    cout<< "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> n;
    cout << "Enter the time period: ";
    cin >> t;
    
    //Using the formula for calculating CI.
    
    r = r / 100; //Converting percentage to decimal
    ci = p * pow(1 + (r / n), n * t);
    
    cout<< "The compounded interest is: " << ci;
    
    
    return 0;
}


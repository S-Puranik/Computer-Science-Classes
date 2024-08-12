#include <iostream>
using namespace std;

int main(){
    
    int p;
    float t, r, si;
    
    cout<< "Enter the Principal Amount: ";
    cin >> p;
    cout<< "Enter the rate of interest: ";
    cin >> r;
    cout<< "Enter the time period in months: ";
    cin >> t;
    
    //Calculating S.I using the formula p*r*t.
    
    t = t/12.0; //Converting time period from months to years.
    
    si = (p*r*t)/100;
    
    cout<< "The simple interest applicable would be: " << si;
    return 0;
}


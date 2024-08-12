#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    float a, b, c, p, area;
    
    cout<< "Enter the sides of triangle: \n a: ";
    cin >> a;
    cout<< " b: ";
    cin >> b;
    cout<< " c: ";
    cin>> c;
    
    //Calculating whether the triangle is valid or not:
    
    if (a + b > c && a + c > b && b + c > a){
        
    //Calculating the area of the triangle using Heron's formula.
    
    p = (a+b+c)/2; // This is the semi-perimeter of the triangle.
    
    area = sqrt(p * (p - a) * (p - b) * (p - c)); 
    
    cout << "The area of the triangle is: " << area;
    }
    
    else {
        cout << "Triangle is invalid.";
    }
    
    return 0;
}

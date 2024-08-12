#include <iostream>
using namespace std;

int main(){
    
    float radius, area, perimeter;
    
    cout<< "Enter the radius of the circle in cm: ";
    cin>> radius;
    
    //Calculating the area and perimeter with their respective formulaes:
    
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    
    cout<<"\n The area of the circle is: " << area <<" square cm.";
    cout<<"\n The perimeter of the circle is: " << perimeter << " cm.";
    return 0;
}

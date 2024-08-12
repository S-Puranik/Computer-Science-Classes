#include <iostream>
using namespace std;

int main(){
    
    int x,y,z;
    
    // Assuming the values of x, y and z to be 1, 2 and 3 respectively.
    
    x = 1; y = 2; z = 3;
    
    // Using a temporary variable to store values of x, y and z.
    
    int x1,y1,z1;
    x1 = x;
    y1 = y;
    z1 = z;
    
    // Now swapping the values of x, y and z:
    
    x = y1;
    y = z1;
    z = x1;
    
    cout<< "Value of x: " << x << "\nValue of y: " <<y << "\nValue of z: " << z;
    
    return 0;
}

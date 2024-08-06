
#include <iostream>
using namespace std;

int main()
{
   string name;
   string gender;
   int age;
   float height;
   string city;
   cout<< "Enter your Name: ";
   getline(cin, name);
   cout<< "Enter your Gender: ";
   getline(cin, gender);
   cout<< "Enter your city: ";
   getline(cin, city);
   cout<< "Enter your age: ";
   cin>> age;
   cout<< "Enter your height: ";
   cin>> height;
   cout<< "\n\nYour Name: "<< name<<"\n";
   cout<< "Your Age: "<< age<<"\n";
   cout<< "Your Gender: "<< gender<<"\n";
   cout<< "Your city: "<< city<<"\n";
   cout<< "Your height: "<< height<<"\n";
   
   
   
    return 0;
}
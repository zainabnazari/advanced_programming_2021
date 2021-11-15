#include <iostream>
#include <string>
using namespace std;

class Human {       // The class
  public:             // Access specifier
    int age;        // Attribute (int variable)
    string colorOfSkin;  // Attribute (string variable)
};

int main() {
  Human zainab; // Create an object of MyClass
  Human carl;




  // Access attributes and set values
  zainab.age = 15;
  zainab.colorOfSkin = "orange";
  carl.age = 10;
  carl.colorOfSkin = "blue";


  // Print values
  cout << zainab.age << "\n";
  cout << zainab.colorOfSkin <<endl;
   cout << carl.age << "\n";
  cout << carl.colorOfSkin<<"\n";
  return 0;
}

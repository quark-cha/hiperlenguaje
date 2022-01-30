//Autor: Victor Estrada Diaz
#include <iostream>
using namespace std;

// Create 
class hyperb {
  public:
    string c;   
    long int b;
};

int main() {
  // Create an object of hyperb
  hyperb c1;
  c1.b = 1999;

  // Create another object of hyperb
  hyperb c2;
  c2.b = 1969;

  // Print attribute values
  cout << c1.b << " significado " << c1.c << " \n";
  cout << c2.b << " significado " << c2.c << " \n\n";
  return 0;
}
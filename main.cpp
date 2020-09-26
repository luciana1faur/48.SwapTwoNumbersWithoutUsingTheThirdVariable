#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Introduceti primul numar: ";
  cin >> a;
  cout << "Introduceti al doilea numar: ";
  cin >> b;

  b = b + a;
  a = b - a;
  b = b - a;

  cout << "Dupa schimbare primul numar este " << a << " si al doilea numar este " << b << endl;

  return 0;
}
//Swap two numbers without using third variable:
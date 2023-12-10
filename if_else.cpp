#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int bilangan;

  cout << "Masukkan bilangan: ";
  cin >> bilangan;

  if (bilangan % 2 == 0) {
    cout << "Bilangan genap" << endl;
  } else {
    cout << "Bilangan ganjil" << endl;
  }

  return 0;
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int bil;

  cout << "Masukkan bilangan: ";
  cin >> bil;

  if (bil > 0) {
    cout << "Bilangan positif" << endl;
  } else if (bil < 0) {
    cout << "Bilangan negatif" << endl;
  } else {
    cout << "Bilangan nol" << endl;
  }

  return 0;
}
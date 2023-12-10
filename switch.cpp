#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int no_hari;

  cout << "Masukkan nomor hari: ";
  cin >> no_hari;

  switch (no_hari) {
    case 1:
      cout << "Senin" << endl;
      break;
    case 2:
      cout << "Selasa" << endl;
      break;
    case 3:
      cout << "Rabu" << endl;
      break;
    case 4:
      cout << "Kamis" << endl;
      break;
    case 5:
      cout << "Jumat" << endl;
      break;
    case 6:
      cout << "Sabtu" << endl;
      break;
    case 7:
      cout << "Minggu" << endl;
      break;
    default:
      cout << "Nomor hari tidak valid" << endl;
  }

  return 0;
}
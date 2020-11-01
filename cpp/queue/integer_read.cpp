#include <iostream>

using namespace std;

int main () {
  int q;
  int type;
  cin >> q;

  while (q--) {
    int type, x;
    cin >> type;
    if (type == 1) {
      cin >> x;
      cout << "type 1 with x : " << x << endl;
    } else if (type == 2) {
      cout << "type 2 " << endl;
    } else if (type == 3) {
      cout << "type 3 " << endl;
    }
  }
}

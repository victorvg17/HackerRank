#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  set <int> my_db;
  int Q, q_typ, dat;
  cin >> Q;
  for (int i=0; i<Q; i++) {
    cin >> q_typ;
    cin >> dat;
    switch (q_typ) {
      case 1: //insert dat to my_db
        my_db.insert(dat);
        break;
      case 2: //erase dat from my_db
        my_db.erase(dat);
        break;
      case 3: // print Y/N if present or not
        cout << (my_db.find(dat) == my_db.end() ? "No" : "Yes") << endl;
        break;
    }
  }
  return 0;
}

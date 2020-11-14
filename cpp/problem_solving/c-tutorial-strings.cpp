#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a, b;
  cin >> a;
  cin >> b;
  string a_copy = a;
  string b_copy = b;
  a_copy[0] = b[0];
  b_copy[0] = a[0];
  cout << a.size() << " " << b.size() << endl;
  cout << a + b << endl;
  cout << a_copy << " " << b_copy;

    return 0;
}

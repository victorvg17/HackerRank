#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function: eg str => "23, 4, 56"
  vector<int> result;
  stringstream ss(str);
  for (int i; ss >> i; ) {
    result.push_back(i);
    if (ss.peek() == ',') {
      ss.ignore();
    }
  }
  return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

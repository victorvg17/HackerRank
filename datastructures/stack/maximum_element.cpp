#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  //input values
  // vector <int> ds;
  std::stack <int> ds;
  int N, x, type;
  int maxElementIndex = -1;


  //input N
  cin >> N;
  for (int i=0; i < N; i++) {
    cin >> type;
    if (type == 1) {
      cin >> x;
      if (ds.empty()) {
        ds.push(x);
      } else {
        ds.push(max(x, ds.top()));
      }
    } else if (type == 2) {
      if (!ds.empty()) {
          ds.pop();
      } else {
        break;
      }
    } else {
        cout << ds.top() << endl;
     }
  }
    return 0;
}

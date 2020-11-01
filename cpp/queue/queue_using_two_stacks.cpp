#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    stack<int> Front, Rear;
    int type, x;
    int top;
    while (q--) {
      // cout << "q : " << q << endl;
      cin >> type;
      if (type == 1) { //enqueue operation
        cin >> x;
        Rear.push(x);
      } else { //dequeue operation or print element
        if (Front.empty()) {
          while(!Rear.empty()) {
            top = Rear.top();
            Front.push(top);
            Rear.pop();
          }
        } //end if Front.empty()

        if (type == 2) { //dequeue operation
          Front.pop();
        } else if (type == 3) { //print top element from Front
          if (!Front.empty()) {
            cout << Front.top() << endl;
          }
        }

      } //end else (type == 1)
    } //end while loop
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int nop;
    string st;
    std::stack<string> stk;
    cin >> nop;
    int curr_op;
    for (int i=0; i<nop; i++) {
      cin >> curr_op;
      if (curr_op == 1) { //append to st
        string inp;
        cin >> inp;
        stk.push(st);
        st += inp;
      } else if (curr_op == 2) { //delete last k characters from the string
        int k;
        cin >> k;
        stk.push(st);
        st.erase(st.end()-k, st.end());
      } else if (curr_op == 3) { //print k-th character of the string
        int k;
        cin >> k;
        cout << st[k-1] << endl;
      } else { //undo operation
        string st_backup = stk.top();
        st.assign(st_backup);
        stk.pop();
      }
    }
    return 0;
}

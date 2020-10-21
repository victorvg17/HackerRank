#include <bits/stdc++.h>
#include <stack>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
  std::stack <char> mystack;
  for (auto c : s) {
    switch (c) {
      case ('{'):
        mystack.push(c);
        break;
      case ('('):
        mystack.push(c);
        break;
      case ('['):
        mystack.push(c);
        break;
      case(']'):
        if ((mystack.top() != '[') || mystack.empty()){
          return "NO";
        }
        mystack.pop();
        break;
      case(')'):
        if ((mystack.top() != '(') || mystack.empty()){
          return "NO";
        }
        mystack.pop();
        break;
      case('}'):
        if ((mystack.top() != '{') || mystack.empty()){
          return "NO";
        }
        mystack.pop();
        break;
    }
  }
  if (mystack.empty()){
    return "YES";
  } else {
    cout << "hehe" << endl;
    return "NO";
  }
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

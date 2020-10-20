#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    vector<int> given_data;
    int no_input;
    int no_queries;
    int query;
    vector <int>::iterator low_bound;

    cin >> N;
    for(int i = 0; i < N; i++){
      cin >> no_input;
      given_data.push_back(no_input);
    }
    sort(given_data.begin(), given_data.end());

    cin >> no_queries;
    for (int i = 0; i < no_queries; i++){
      cin >> query;
      low_bound = lower_bound(given_data.begin(),
                              given_data.end(),
                              query);
      if (given_data[low_bound - given_data.begin()] == query)
        cout << "Yes " << low_bound - given_data.begin() + 1 << endl;
      else
        cout << "No " << low_bound - given_data.begin() + 1 << endl;
    }
    return 0;
  }

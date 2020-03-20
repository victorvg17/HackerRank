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
    int input;
    int index_to_del;
    int index_start;
    int index_end;

    cin >> N;
    for(int i = 0; i < N; i++){
      cin >> input;
      given_data.push_back(input);
    }

    cin >> index_to_del;
    //delete the number at index_to_del
    given_data.erase(given_data.begin() + index_to_del - 1);
    //delete numbers in given index range
    cin >> index_start;
    cin >> index_end;
    given_data.erase(given_data.begin() + index_start - 1,
                    given_data.begin() + index_end - 1);
    // output
    cout << given_data.size() << endl;
    for (int i = 0; i < given_data.size(); i++){
      cout << given_data[i] << " ";
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> mark_records;
    int record_size;
    int query_type;
    string name;
    int mark_subject;


    cin >> record_size;
    for (int i = 0; i < record_size; i++){
      cin >> query_type >> name;
      if (query_type == 1){ //add (name, mark) to map
        cin  >> mark_subject;
        mark_records[name] += mark_subject;
      }
      else if (query_type == 2){ // erase the entry with given key
        mark_records.erase(name);
      }
      else { //query for the value with given key
        cout << mark_records[name] << endl;
      }
    }
    return 0;
}

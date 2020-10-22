#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int getSumStack(stack<int>& sh1) {
  int sum = 0;
  while (!sh1.empty()) {
    sum += sh1.top();
    sh1.pop();
  }
  return sum;
}

void loadVectorToStack(std::vector<int>& h, std::stack<int>& sh) {
  for (auto& a : h){
    sh.push(a);
  }
}
/*
 * Complete the 'equalStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h1
 *  2. INTEGER_ARRAY h2
 *  3. INTEGER_ARRAY h3
 */

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
  // basically we do alternating sequence of max(sum stack) and pop operations
  std::stack<int> sh1;
  std::stack<int> sh2;
  std::stack<int> sh3;
  int max_index = 0;

  bool areStacksLevel = false;
  std::vector<int> sum[3] = {0, 0, 0};
  loadVectorToStack(h1, sh1);
  loadVectorToStack(h2, sh2);
  loadVectorToStack(h3, sh3);

  //big vector keeping all stacks together
  std::vector<std::stack> big_vect{sh1, sh2, sh3};

  while (!areStacksLevel) {
    for (int i=0; i<3; i++) {
      sum[i] = getSumStack(big_vect[i]);
    }
    if (std::adjacent_find(sum.begin(), sum.end(), std::not_equal_to<>()) == sum.end()) {
      areStacksLevel = true;
      return sum[0];
    }
    max_index = std::max_element(sum.begin(), sum.end()) - sum.begin();
    //pop element from the max index stack
    if (!big_vect[max_index].empty() ){
      big_vect[max_index].pop();
    }
  }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n1 = stoi(first_multiple_input[0]);

    int n2 = stoi(first_multiple_input[1]);

    int n3 = stoi(first_multiple_input[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split(rtrim(h1_temp_temp));

    vector<int> h1(n1);

    for (int i = 0; i < n1; i++) {
        int h1_item = stoi(h1_temp[i]);

        h1[i] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split(rtrim(h2_temp_temp));

    vector<int> h2(n2);

    for (int i = 0; i < n2; i++) {
        int h2_item = stoi(h2_temp[i]);

        h2[i] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split(rtrim(h3_temp_temp));

    vector<int> h3(n3);

    for (int i = 0; i < n3; i++) {
        int h3_item = stoi(h3_temp[i]);

        h3[i] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

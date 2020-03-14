#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int q;
    cin >> n;
    cin >> q;
    int out[q];

    // input the data
    vector <vector <int> > data(n);
    for (int i = 0; i < n; i++){
        int len_k;
        cin >> len_k;
        data[i].resize(len_k);

        for (int j = 0; j < len_k; j++){
            int element;
            cin >> element;
            data[i][j] = element;
        }
    }
    //query part
    for (int k = 0; k < q; k++){
        int i_q;
        int j_q;
        cin >> i_q;
        cin >> j_q;
        out[k] = data[i_q][j_q];
    }
    //print output
    for (int k = 0; k < q; k++){
        cout << out[k]<<endl;
    }

    return 0;
}

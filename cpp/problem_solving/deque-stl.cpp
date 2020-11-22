#include <iostream>
#include <deque>
#include <assert.h>
#include <algorithm>

using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here. n >= k
	deque<int> my_q(k);
	deque<int>::iterator result;
	for (int i=0; i<k; i++) { //load the the queue one time
		my_q.push_back(arr[i]);
	}
	for (int i=k; i<n; i++) {
		result = max_element(my_q.begin(), my_q.end());
		cout << *result << " ";

		my_q.pop_front();
		my_q.push_back(arr[i]);
		assert(my_q.size() == k);
	}
	cout << *max_element(my_q.begin(), my_q.end()) << endl;

}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

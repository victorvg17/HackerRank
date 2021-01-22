
#include <stack>
using namespace std;
void reversePrint(SinglyLinkedListNode* head) {
    stack<int>mys;
    SinglyLinkedListNode* runner = head;
    if (head == nullptr){
        return;
    }
    while (runner != nullptr){
        mys.push(runner->data);
        runner = runner->next;
    }
    while (!mys.empty()){
        cout << mys.top() << endl;
        mys.pop();
    }
}

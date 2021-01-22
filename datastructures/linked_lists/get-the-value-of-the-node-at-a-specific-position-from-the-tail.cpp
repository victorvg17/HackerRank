int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    stack<int> st;
    if (head->next == nullptr) {
        return head->data;
    }
    SinglyLinkedListNode* r = head;
    while(r != nullptr){
        st.push(r->data);
        r = r->next;
    }
    for (int i=positionFromTail; i>0; i--){
        st.pop();
    }
    return st.top();
}

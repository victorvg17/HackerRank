SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* a,
                                 SinglyLinkedListNode* b) {
    SinglyLinkedListNode* result = nullptr;
    if (a == nullptr) {
        return b;
    }
    else if (b == nullptr) {
        return a;
    }
    if (a->data <= b->data){
        result = a;
        result->next = mergeLists(a->next, b);
    }
    if (a->data > b->data){
        result = b;
        result->next = mergeLists(a, b->next);
    }
    return result;
}

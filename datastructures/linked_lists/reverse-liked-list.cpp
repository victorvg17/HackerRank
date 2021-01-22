
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* next = nullptr;
    SinglyLinkedListNode* curr = head;
    if (head == nullptr){
        return head;
    }
    while (curr != nullptr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

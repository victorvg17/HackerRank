
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int pos) {
    SinglyLinkedListNode* runner = head;
    if (head == nullptr){
        return head;
    }
    int p = 0;
    if (pos == 0) {
        head = head->next;
        return head;
    }
    if (pos == 1) {
        head->next = head->next->next;
        return head;
    }
    while(p < pos-1){
        runner = runner->next;
        p++;
    }
    runner->next = runner->next->next;
    return head;

}

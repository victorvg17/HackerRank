
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* nw = new DoublyLinkedListNode(data);
    if (head == nullptr){
        return nw;
    }
    else if (head->data >= nw->data) {
        nw->next = head;
        nw->next->prev = nw;
        head = nw;
        return head;
    }
    else {
        DoublyLinkedListNode* r = head;
        while((r->next != nullptr) && (r->next->data < nw->data)){
            r = r->next;
        }
        nw->next = r->next;
        if (r->next != nullptr){
            nw->next->prev = nw;
        }
        r->next = nw;
        nw->prev = r;
        return head;
    }
}

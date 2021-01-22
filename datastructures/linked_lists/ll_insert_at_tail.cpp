SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* runner = head;
    if (head == nullptr){
        return new SinglyLinkedListNode(data);
    }
    while (runner->next != nullptr){
        runner = runner->next;
    }
    runner->next = new SinglyLinkedListNode(data);
    return head;
}

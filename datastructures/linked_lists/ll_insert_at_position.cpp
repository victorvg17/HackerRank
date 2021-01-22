
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* runner = head;
    if (head == nullptr){
        return new SinglyLinkedListNode(data);
    }
    int i=0;
    while (i<position-1){
        runner = runner->next;
        i++;
    }
    SinglyLinkedListNode* newbi = new SinglyLinkedListNode(data);
    newbi->next = runner->next;
    runner->next = newbi;
    return head;
}

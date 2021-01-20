
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* r1 = head1;
    SinglyLinkedListNode* r2 = head2;
    while((r1 != nullptr) && (r2 != nullptr)) {
        if (r1->data != r2->data) {
            return false;
        }
        r1 = r1->next;
        r2 = r2->next;
    }
    return (r1 == nullptr) && (r2 == nullptr);
}

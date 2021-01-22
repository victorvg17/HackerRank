
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    set<SinglyLinkedListNode*> mys;
    SinglyLinkedListNode* r = head1;
    while (r != nullptr){
        mys.insert(r);
        r = r->next;
    }
    r = head2;
    while (r != nullptr){
        auto it = mys.find(r);
        if (it != mys.end()){
            return (*it)->data;
        }
        r = r->next;
    }
    return 0;

}

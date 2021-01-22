
bool has_cycle(SinglyLinkedListNode* head) {
    if (head == nullptr){
        return false;
    }
    set<SinglyLinkedListNode*> mys;
    SinglyLinkedListNode* r = head;
    while (r != nullptr){
        if (mys.find(r) != mys.end()){
            return true;
        }
        mys.insert(r);
        r = r->next;
    }
    return false;

}

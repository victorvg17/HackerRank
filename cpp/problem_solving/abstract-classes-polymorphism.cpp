#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{

   protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : Cache{
public:
  LRUCache(int capacity):cp(capacity), mp(),
  head(), tail() {}
  void set(int key, int value);
  int get(int key);
  void cacheHitReorder(Node* hit_on);
};

void LRUCache::cacheHitReorder(Node* hit_on) {
  Node* prev;
  Node* next;

  prev_node = hit_on->prev;
  next_node = hit_on->next;
  prev_node->next = next_node;

  if (tail == hit_on) {
    tail = tail->prev;
  } else




}
void LRUCache::set(int key, int value) {
  if (mp.empty() == true) {
    Node* newbie = new Node(key, value);
    tail = head = newbie;
    mp[key] = newbie;
    return;
  }
  auto it = mp.find(key);
  Node* hit_on;

  if (it != mp.end()) { // cache hit
    hit_on = it->second;
    hit_on->value = value;
    if (head == hit_on){
      return;
    }
    cacheHitReorder(hit_on);
  } else { // cache miss

  }
}

int LRUCache::get(int key) {

}
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}

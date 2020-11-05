#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

      int height(Node* root) {
          // Write your code here.
          int max_depth = 0, max_depth_left, max_depth_right;
          if (root == nullptr) {
            return 0;
          }
          max_depth_left = height(root->left);
          max_depth_right = height(root->right);
          max_depth = std::max(max_depth_left, max_depth_right) + 1;

          return max_depth;
      }

      void printGivenLevel(Node* root, int level) {
        if (root == nullptr) {
          return;
        }
        if (level == 1) {
          cout << root->data << " ";
        } else if (level > 1) {
          printGivenLevel(root->left, level-1);
          printGivenLevel(root->right, level-1);
        }
      }

      void levelOrder(Node * root) {
        int ht_tree = height(root);
        for (int i=0; i<=ht_tree; i++) {
          printGivenLevel(root, i);
        }

      }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.levelOrder(root);

    return 0;
}

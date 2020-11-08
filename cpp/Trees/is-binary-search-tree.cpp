/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
#include <climits>
	bool checkBstHelper(Node*root, int min, int max) {
		if (root == nullptr) { //empty tree is BST; idk
			return true;
		}
		//check for the BST condition.
		if (root->data <= min || root->data >= max){
			return false;
		}
		bool out = checkBstHelper(root->left, min, root->data) && checkBstHelper(root->right, root->data, max);
		return out;
	}

	bool checkBST(Node* root) {
		bool is_bst = checkBstHelper(root, 0, INT_MAX);
		return is_bst;
	}

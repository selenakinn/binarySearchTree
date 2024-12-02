#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
// Node structure for the Binary Search Tree

Node* createNode(int data){
	
	Node* newNode=new Node();
	newNode->data=data;
	newNode->left=newNode->right =nullptr;
	return newNode;
}
//New node creation function created

void inorder(struct Node *root) {
  if (root != NULL) {
    inorder(root->left);
    // Traverse left

    cout << root->data << " -> ";
    // Traverse root

    inorder(root->right);
    // Traverse right    
  }
}
// Inorder Traversal

int main() {
    Node* root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	root->right->left=createNode(6);
	root->right->right=createNode(7);
	//New BST created with createNode function
	
	cout << "Output of binary search tree in-order:";
	inorder(root);
	//Traverse a tree level by level in order
	
    return 0;
}

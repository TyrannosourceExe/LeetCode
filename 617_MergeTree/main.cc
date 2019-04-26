/********

Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not.

You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of new tree.

Example 1:

Input: 
	Tree 1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7                  
Output: 
Merged tree:
	     3
	    / \
	   4   5
	  / \   \ 
	 5   4   7
 

Note: The merging process must start from the root nodes of both trees.
*******/

#include<iostream>

// Definition for a binary tree node.
typedef struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 }TreeNode;
 
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        //TODO Implement MergeTree
        return NULL;
    }
    TreeNode* createNode(int val){
    	TreeNode* new_node = new TreeNode;
    	new_node -> val = val;
    	new_node -> left = new_node -> right = NULL;
    	return new_node;
    }

    void recursivePrint(TreeNode* tree){
    	if (tree == NULL) return;
    	/* check left nodes first =) */
    	recursivePrint(tree -> left);
    	std::cout<<tree -> val<<std::endl;
    	recursivePrint(tree -> right);
    }
};


int main (){

	/**************************************** 
	create trees
		Tree 1                     Tree 2                  
          1                         2                             
         / \                       / \                            
        3   2                     1   3                        
       /                           \   \                      
      5                             4   7 
    ****************************************/ 

	Treenode *t1 = createNode(1);
	t1 -> left = createNode(3);
	t1 -> right = createNode(2);
	t1 -> left -> left = createNode(5);
	return 0;
}
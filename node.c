#include <stdio.h>
#include "node.h"

void displayIndorder(treeNode* root) {
	if (root) {
		displayIndorder(root->left);
		printf("%c_", root->key);
		displayIndorder(root->right);
	}
}
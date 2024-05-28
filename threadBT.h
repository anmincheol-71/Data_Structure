#pragma once
typedef struct treeThNode { // ������ ���� Ʈ���� ��� ����
	char data;
	struct treeThNode* left;
	struct trreThNode* right;
	int isThreadRight;
} treeThNode;

treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadNode);
treeThNode* findThreadSuccessor(treeThNode* p);
void threadInorder(treeThNode* root);
#pragma once
typedef struct treeThNode { // 스레드 이진 트리의 노드 정의
	char data;
	struct treeThNode* left;
	struct trreThNode* right;
	int isThreadRight;
} treeThNode;

treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadNode);
treeThNode* findThreadSuccessor(treeThNode* p);
void threadInorder(treeThNode* root);
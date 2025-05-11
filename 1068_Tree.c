//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N;
//int parent[51] = { 0, };
//int childrenNum[51] = { 0, };
//
//void deleteNode(int target);
//
//int main() {
//	int node, count = 0;
//
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &parent[i]);
//		if (parent[i] != -1)
//			childrenNum[parent[i]]++;
//	}
//	scanf("%d", &node);
//
//	deleteNode(node);
//
//	for (int i = 0; i < N; i++) {
//		if (childrenNum[i] == 0)
//			count++;
//	}
//
//	printf("%d", count);
//}
//
//void deleteNode(int target) {
//	if (childrenNum[target] == 0) {
//		childrenNum[target] = -1;
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (parent[i] == target)
//			deleteNode(i);
//	}
//
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int parent[51];
int childrenNum[51];
int isDeleted[51] = { 0, };

void deleteNode(int target) {
	isDeleted[target] = 1;
	for (int i = 0; i < N; i++) {
		if (parent[i] == target && !isDeleted[i]) {
			deleteNode(i);
		}
	}
	// 부모 노드의 자식 수 감소
	if (parent[target] != -1) {
		childrenNum[parent[target]]--;
	}
}

int main() {
	int node, count = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &parent[i]);
		if (parent[i] != -1)
			childrenNum[parent[i]]++;
	}
	scanf("%d", &node);

	deleteNode(node);

	for (int i = 0; i < N; i++) {
		if (!isDeleted[i] && childrenNum[i] == 0)
			count++;
	}

	printf("%d\n", count);
	return 0;
}

// 백준 11866. 요세푸스 문제 0
// 2025. 04. 01.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

int main(void) {
	int n, k;
	Node* head = NULL; // 가장 마지막에 삽입된 노드를 가리킴
	scanf("%d %d", &n, &k);

	for (int i = n; i > 0; i--) {
		Node* curr;
		curr = (Node*)calloc(1, sizeof(Node));
		curr->data = i;
		if (i == n) {
			head = curr;
			head->next = head;
		} else {
			curr->next = head->next;
			head->next = curr;
		}
	}
	head = head->next;

	Node* knode, * prev;
	knode = head;
	prev = head;
	printf("<");
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < k; j++) {
			prev = knode;
			knode = knode->next;
		}

		printf("%d", knode->data);
		prev->next = knode->next;
		knode = knode->next;

		if (i == n - 1)
			printf(">");
		else
			printf(", ");
	}
	return 0;
}
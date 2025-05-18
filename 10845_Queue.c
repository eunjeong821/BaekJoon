// 2025. 05. 18.
// 10845. Queue
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int rear = -1, front = -1;
int Queue[10001];

void addQ(int num);
void deleteQ();
void printQ();

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		char inst[10];
		scanf("%s", inst);
		if (strcmp(inst, "push") == 0) {
			int num;
			scanf("%d", &num);
			addQ(num);
		}
		else if (strcmp(inst, "pop") == 0) {
			deleteQ();
		}
		else if (strcmp(inst, "size") == 0) {
			printf("%d\n", rear - front);
		}
		else if (strcmp(inst, "empty") == 0) {
			if (front == rear)
				printf("%d\n", 1);
			else
				printf("%d\n", 0);
		}
		else if (strcmp(inst, "front") == 0) {
			if (rear - front == 0)
				printf("%d\n", -1);
			else
				printf("%d\n", Queue[front+1]);
		}
		else if (strcmp(inst, "back") == 0) {
			if (rear - front == 0)
				printf("%d\n", -1);
			else
				printf("%d\n", Queue[rear]);
		}
	}
}

void addQ(int num) {
	if (rear < 10000) {
		Queue[++rear] = num;
	}
}

void deleteQ() {
	if (front == rear)
		printf("%d\n", -1);
	else {
		printf("%d\n", Queue[++front]);
	}
}
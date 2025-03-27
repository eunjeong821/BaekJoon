// 백준 10828. 스택
// 2025. 03. 27.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define STACK_SIZE 10000

int stack[STACK_SIZE] = { 0, };
int top = -1;

int isEmpty();
int isFull();
void push(int element);
int pop();
void printTop();

int main() {
	int num = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		char input[10] = { 0, };
		scanf("%s", &input);

		if (strcmp(input, "push") == 0) {
			int n;
			scanf("%d", &n);
			push(n);
		}
		else if (strcmp(input, "pop") == 0) {
			printf("%d\n", pop());
		}
		else if (strcmp(input, "top") == 0) {
			printTop();
		}
		else if (strcmp(input, "size") == 0) {
			printf("%d\n", top+1);
		}
		else if (strcmp(input, "empty") == 0) {
			printf("%d\n", isEmpty());
		}
	}
	return 0;
}

int isEmpty() {
	if (top == -1)
		return 1;
	return 0;
}

int isFull() {
	if (top >= 99999)
		return 1;
	return 0;
}

void push(int element) {
	if (isFull()) {
		printf("Stack is Full.\n");
		return;
	}
	stack[++top] = element;

	//printf("Push: %d\n", element);
}

int pop() {
	if (isEmpty()) {
		return -1;
	}

	return stack[top--];
}

void printTop() {
	if (top < 0) {
		printf("%d\n", -1);
		return;
	}
	printf("%d\n", stack[top]);
}
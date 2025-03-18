// 백준 1874. 스택 수열
// 2025. 03. 18.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int top = -1, index = 0;
int stack[100001] = { 0, };
char out[200002] = { 0, };

int isEmpty();
int isFull();
void push(int element);
int pop();

int main() {
	int input, n = 1;
	int seq[100001] = { 0, };

	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &seq[i]);
	}

	for (int i = 0; i < input; i++) {
		while (n <= seq[i]) {
			push(n++);
		}

		if (seq[i] != pop()) {
			printf("NO");
			return 0;
		}
	}

	for (int i = 0; i < index; i++) { // i<=index 아니고 i<index 까지만!
		printf("%c\n", out[i]);
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
	out[index++] = '+';

	//printf("Push: %d\n", element);
}

int pop() {
	if (isEmpty()) {
		printf("Stack is Empty.\n");
		return;
	}
	out[index++] = '-';

	//printf("Pop: %d\n", stack[top + 1]);
	return stack[top--];
}
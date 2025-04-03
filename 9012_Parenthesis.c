// 백준 9012. 괄호
// 2025. 04. 03.

#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 100
#include <stdio.h>
#include <string.h>

char stack[MAX_STACK_SIZE] = { 0, };
int top = -1;

int IsEmpty();
int IsFull();
void Push(char input);
int Pop();

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int returnVal = 1;
		char inputString[100] = { 0, };
		top = -1;

		scanf("%s", inputString);

		for (int j = 0; j < strlen(inputString); j++) {
			if (inputString[j] == '(') {
				Push(inputString[i]);
			}
			else if (inputString[j] == ')') {
				returnVal = Pop();
				if (returnVal == 0) {
					printf("NO\n");
					break;
				}
			}
		}

		if (returnVal == 0)
			continue;

		if (IsEmpty() == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}

int IsEmpty() {
	if (top == -1)
		return 0;	// 비어있을 때 0 반환
	return 1;
}
int IsFull() {
	if (top == MAX_STACK_SIZE - 1)
		return 0;	// 꽉 찼을 때 0 반환
	return 1;
}
void Push(char input) {
	if (IsFull() == 0) {
		printf("Stack is full.");
		return;
	}
	stack[++top] = input;
}
int Pop() {
	if (IsEmpty() == 0) {
		return 0;
	}
	top--;
	return 1;
}
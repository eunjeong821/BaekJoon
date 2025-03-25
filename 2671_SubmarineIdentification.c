// 백준 2671. 잠수함 식별
// 2025. 03. 25.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	/*  
		DFA
		States: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
		Initial state: 1
		Final states: 3, 7, 8
		Error state: 0
	*/
	int currentState = 1; // Initial State
	int nextState = 1;
	char inputString[200] = { 0, };

	scanf("%s", &inputString);

	for (int i = 0; i < 150; i++) {
		currentState = nextState;
		int input = inputString[i] - '0';
		//printf("%d", currentState);
		switch (currentState) {
			case 0:
				nextState = 0;
				break;
			case 1:
				if (input == 0) {
					nextState = 2;
				}
				else if (input == 1) {
					nextState = 4;
				}
				else {
					nextState = 0;
				}
				break;
			case 2:
				if (input == 0) {
					nextState = 0;
				}
				else if (input == 1) {
					nextState = 3;
				}
				else {
					nextState = 0;
				}
				break;
			case 3:
				if (input == 0) {
					nextState = 2;
				}
				else if (input == 1) {
					nextState = 4;
				}
				else {
					nextState = 0;
				}
				break;
			case 4:
				if (input == 0) {
					nextState = 5;
				}
				else if (input == 1) {
					nextState = 0;
				}
				else {
					nextState = 0;
				}
				break;
			case 5:
				if (input == 0) {
					nextState = 6;
				}
				else if (input == 1) {
					nextState = 0;
				}
				else {
					nextState = 0;
				}
				break;
			case 6:
				if (input == 0) {
					nextState = 6;
				}
				else if (input == 1) {
					nextState = 7;
				}
				else {
					nextState = 0;
				}
				break;
			case 7:
				if (input == 0) {
					nextState = 2;
				}
				else if (input == 1) {
					nextState = 8;
				}
				else {
					nextState = 0;
				}
				break;
			case 8:
				if (input == 0) {
					nextState = 9;
				}
				else if (input == 1) {
					nextState = 8;
				}
				else {
					nextState = 0;
				}
				break;
			case 9:
				if (input == 0) {
					nextState = 6;
				}
				else if (input == 1) {
					nextState = 3;
				}
				else {
					nextState = 0;
				}
				break;
		}

		if (nextState == 0) {
			printf("NOISE");
			break;
		}

		if ((nextState == 3 || nextState == 7 || nextState == 8) && i == (strlen(inputString)-1)) {
			printf("SUBMARINE");
			break;
		}
	}
	return 0;
}
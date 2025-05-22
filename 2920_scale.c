// 백준 2920. 음계
// 2025. 05. 22
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// initial : 8 -> final : 1 => descending
// initial : 1 -> final : 8 => ascending
// final : 2~7 => mixed
int output;

int main() {
	scanf("%d", &output);
	if (output == 1) {
		int current, prev = output;
		for (int i = 0; i < 7; i++) {
			scanf("%d", &current);
			if (current > prev) {
				prev = current;
				output++;
			}
			else
				output = -100;
		}
	}
	else if (output == 8) {
		int current, prev = output;
		for (int i = 0; i < 7; i++) {
			scanf("%d", &current);
			if (current < prev) {
				prev = current;
				output--;
			}
			else
				output = -100;
		}
	}
	else {
		for (int i = 0; i < 7; i++) {
			scanf("%d", &output);
		}
		output = -100;
	}
	
	if (output == 1)
		printf("descending");
	else if (output == 8)
		printf("ascending");
	else
		printf("mixed");

}
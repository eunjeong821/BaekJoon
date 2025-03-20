#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0, num = 0;
	char input[3][9] = { 0, };

	scanf("%8s", input[0]);
	scanf("%8s", input[1]);
	scanf("%8s", input[2]);

	for (i = 0; i < 3; i++) {
		if (atoi(input[i])) {
			num = atoi(input[i]);
			break;
		}
	}
	num = num + (3 - i);
	if (num % 3 == 0 && num % 5 == 0)
		printf("FizzBuzz");
	else if (num % 3 == 0)
		printf("Fizz");
	else if (num % 5 == 0)
		printf("Buzz");
	else {
		char str_num[8] = { 0, };
		sprintf(str_num, "%d", num);
		printf("%s", str_num);
	}
	return 0;
}
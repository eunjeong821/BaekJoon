// ���� 1676. ���丮�� 0�� ����
// 2025. 04. 08.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, count = 0;
	scanf("%d", &N);

	for (int i = 5; N / i >= 1; i *= 5) {
		count += N / i;
	}

	printf("%d", count);

	return 0;
}
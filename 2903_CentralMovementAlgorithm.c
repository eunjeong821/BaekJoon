// ���� 2903. �߾� �̵� �˰���
// 2025. 04. 27.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n, i, dot = 3, inc = 2;
	scanf("%d", &n);

	for (i = 1; i < n; i++) {
		dot += inc;
		inc *= 2;
	}

	printf("%d", dot * dot);

	return 0;
}

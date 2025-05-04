// 백준 2581. 소수
// 2025. 05. 04.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int M, N;
    scanf("%d\n%d", &M, &N);

    int sum = 0, min = 0;
    for (int i = M; i <= N; i++) {
        for (int j = 2; j < i; j++) { 
            if (i % j == 0) {
                break;
            }
            if (j == i - 1) {
                sum += i;
                if (min == 0)
                    min = i;
            }
        }
        if (i == 2) {
            sum += i;
            min = i;
        }
    }
    if (min != 0)
        printf("%d\n%d", sum, min);
    else
        printf("-1");
}
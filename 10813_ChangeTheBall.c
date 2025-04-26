// 백준 10813. 공 바꾸기
// 2025. 04. 26
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, m, a, b, t, e[100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) 
        e[i] = i + 1;

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        t = e[a - 1];
        e[a - 1] = e[b - 1];
        e[b - 1] = t;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", e[i]);

    return 0;
}
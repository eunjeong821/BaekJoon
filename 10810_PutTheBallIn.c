// 백준 10810. 공 넣기
// 2025. 04. 17.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n, m;
    int arr[101] = { 0, };
    int a, b, c;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
// 2025. 05. 18.
// 18110. solve.ac
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    int* arr;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);

    int idx = (int)round(n * 0.15);
    double sum = 0;
    int count = n - 2 * idx;
    for (int i = idx; i < n - idx; i++)
        sum += arr[i];
    printf("%d", (int)round(sum / count));
    return 0;
}
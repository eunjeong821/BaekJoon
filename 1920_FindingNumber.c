// 백준 1920. 수 찾기
// 2025. 04. 10.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main(void) {
    int N, M;
    scanf("%d", &N);
    int* inputN = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &inputN[i]);
    }

    qsort(inputN, N, sizeof(int), compare);

    scanf("%d", &M);
    int num;
    for (int i = 0; i < M; i++) {
        scanf("%d", &num);
        printf("%d\n", binary_search(inputN, N, num));
    }

    free(inputN);
    return 0;
}

// 시간 초과
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int N, M;
//	int inputN[100001] = { 0, };
//	int inputM[100001] = { 0, };
//
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//		scanf("%d", &inputN[i]);
//	scanf("%d", &M);
//	for (int i = 0; i < M; i++)
//		scanf("%d", &inputM[i]);
//
//	for (int i = 0; i < M; i++) {
//		int j = 0;
//		for (j = 0; j < N; j++) {
//			if (inputM[i] == inputN[j])
//				break;
//		}
//		if (j == N)
//			printf("%d\n", 0);
//		else
//			printf("%d\n", 1);
//	}
//	return 0;
//}
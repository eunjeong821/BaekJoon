// น้มุ 8958. OXฤ๛ม๎
// 2025. 04. 20.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    int input, score, sum;
    char test[80];

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        sum = 0;
        score = 1;
        scanf("%s", test);
        for (int j = 0; j < strlen(test); j++) {
            if (test[j] == 'O') {
                sum += score;
                score++;
            }
            if (test[j] == 'X')  score = 1;
        }
        printf("%d\n", sum);
    }
}
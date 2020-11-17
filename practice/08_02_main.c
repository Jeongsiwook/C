#define _CRT_SECURE_NO_WARNINGS
#include "08_02_factor.h"
#include <stdio.h>

int main() {
    int factors[100][2];   // 인수 쌍을 담을 배열
    int a, b, c;

    printf("a를 입력하세요: ");
    scanf("%d", &a);
    printf("b를 입력하세요: ");
    scanf("%d", &b);
    printf("c를 입력하세요: ");
    scanf("%d", &c);

    // 결과 출력
    int count_a = factorize(a, factors);

    printf("a의 가능한 인수조합: %d쌍\n", count_a);

    for (int i = 0; i < count_a; i++) {
        printf("%d %d\n", factors[i][0], factors[i][1]);
    }

    int count_c = factorize(c, factors);

    printf("c의 가능한 인수조합: %d쌍\n", count_c);

    for (int i = 0; i < count_c; i++) {
        printf("%d %d\n", factors[i][0], factors[i][1]);
    }
}
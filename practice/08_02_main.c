#define _CRT_SECURE_NO_WARNINGS
#include "08_02_factor.h"
#include <stdio.h>

int main() {
    int factors[100][2];   // �μ� ���� ���� �迭
    int a, b, c;

    printf("a�� �Է��ϼ���: ");
    scanf("%d", &a);
    printf("b�� �Է��ϼ���: ");
    scanf("%d", &b);
    printf("c�� �Է��ϼ���: ");
    scanf("%d", &c);

    // ��� ���
    int count_a = factorize(a, factors);

    printf("a�� ������ �μ�����: %d��\n", count_a);

    for (int i = 0; i < count_a; i++) {
        printf("%d %d\n", factors[i][0], factors[i][1]);
    }

    int count_c = factorize(c, factors);

    printf("c�� ������ �μ�����: %d��\n", count_c);

    for (int i = 0; i < count_c; i++) {
        printf("%d %d\n", factors[i][0], factors[i][1]);
    }
}
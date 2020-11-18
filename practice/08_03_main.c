#define _CRT_SECURE_NO_WARNINGS
#include "08_03_factor.h"
#include <stdio.h>

int main() {
    int factors[100][2];   // �μ� ���� ���� �迭
    int a, b, c;

    printf("a�� �Է��ϼ���:");
    scanf("%d", &a);
    printf("b�� �Է��ϼ���:");
    scanf("%d", &b);
    printf("c�� �Է��ϼ���:");
    scanf("%d", &c);

    // ��� ���
    int count_a = factorize(a, factors);

    printf("a�� ������ �μ�����: %d��\n", count_a);

    for (int i = 0; i < count_a; i++) {
        printf("%d %d\n", factors[i][0], factors[i][1]);
    }

    int count_c = factorize(c, factors);

    printf("c�� ������ �μ�����: %d��\n", count_c);

    for (int i = count_c - 2; i < (count_a + count_c); i++) {
        printf("%d %d\n", factors[i][0], factors[i][1]);
    }

    printf("%dx^2 + %dx + %d = 0\n", a, b, c);

    int i = 0, j = 0;
    int num;
    for (i = 0; i < count_a; i++) {
        for (j = count_c - 2; j < (count_a + count_c); j++) {
            printf("i, j: %d %d\n", i, j);
            num = factors[i][0] * factors[j][1] + factors[i][1] * factors[j][0];
            printf("num: %d\n", num);

            // �μ����� ����
            if (num == b) {
                break;
            }
        }
        if (num == b) {
            break;
        }
    }
    
    // ����ϰ� ����ϱ� ����
    if (factors[j][0] > 0 && factors[j][1] > 0) {
        printf("(%dx + %d)(%dx + %d) = 0\n", factors[i][0], factors[j][0], factors[i][1], factors[j][1]);
    }
    else if (factors[j][0] > 0) {
        printf("(%dx + %d)(%dx - %d) = 0\n", factors[i][0], factors[j][0], factors[i][1], -factors[j][1]);
    }
    else if (factors[j][1] > 0) {
        printf("(%dx - %d)(%dx + %d) = 0\n", factors[i][0], -factors[j][0], factors[i][1], factors[j][1]);
    }
    else {
        printf("(%dx - %d)(%dx - %d) = 0\n", factors[i][0], -factors[j][0], factors[i][1], -factors[j][1]);
    }
    
    printf("��:\n");
    double res1 = (double)(factors[j][0]) / (double)(-factors[i][0]);
    double res2 = (double)(factors[j][1]) / (double)(-factors[i][1]);
    printf("x = %4.3f\n", res1);
    printf("x = %4.3f\n", res2);

    return 0;

}
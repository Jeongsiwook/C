// "*"�� �̿��� �ﰢ�� �׸��׸���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num > 30) {
        printf("�ʹ� Ů�ϴ�.");
        return 0;
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - 1 - i; j++) { // ��ĭ �κ�
            printf(" ");
        }
        for (int j = 0; j < (2 * i + 1); j++) { // * �κ�
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// "*"�� �̿��� ������ �׸��׸���
// Ȧ���� �Է¹����� ��Ī�� ����, ¦���� ��Ī�� �־�

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

    // �Է��� ���ڰ� ¦���� ���
    if (num % 2 == 0) {        
        int share = num / 2;

        // (num / 2)�� ��
        for (int i = 0; i < share; i++) {
            for (int j = 0; j < share - i - 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                printf("*");
            }
            printf("\n");
        }
        // (num / 2)�� �Ʒ�
        for (int i = share; i > 0; i--) {
            for (int j = 0; j < share - i; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i - 1); j++) {
                printf("*");
            }
            printf("\n");
        }            
    }

    // �Է��� ���ڰ� Ȧ���� ���
    else {
        int share = (num / 2) + 1;
        // (num / 2) + 1�� ��
        for (int i = 0; i < share; i++) {
            for (int j = 0; j < share - i - 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                printf("*");
            }
            printf("\n");
        }
        // (num / 2) + 1�� �Ʒ�
        for (int i = share - 1; i > 0; i--) {
            for (int j = 0; j < share - i; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i - 1); j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
// ����ī��(2 ~ 10)�� ��ġ�� �ش� ����
// �׸�ī��(J, Q, K)�� ��ġ�� 10
// A ī���� ��ġ�� 11(�Ļ��ϰ�    �� ��� 1�� ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int value = 0; // ���� ��ġ�� ���� ����
    int a_check = 0; // A ī�� ���� Ȯ�� ����

    while (card_name[0] != 'X') { // X�� �Է¹����� ���α׷� ����
        printf("ī���̸��� �Է��ϼ���: ");
        scanf("%2s", card_name);
        int val = 0; // ���� ��ġ�� ���� ����

        switch (card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            a_check++; // A�� ���� �� +1
            break;
        case 'X':
            continue;
        default:
            val = atoi(card_name);

            if ((val < 2) || (val > 10)) {
                printf("���� �� �� �����ϴ�.\n");
                continue;
            }
        }
        value += val; // ���� ��ġ�� ī�� ���� ����

        if ((value >= 17) && (value <= 21)) {
            printf("������ġ: %d\n", value);
            printf("���� ��Ĩ�ϴ�.\n");
            break;
        }
        else if (value > 21) {
            if (a_check > 0) { // 21�� �ʰ����� �� A ī�尡 �ִ� �� Ȯ��
                value -= 10;
                a_check--;
                printf("������ġ: %d\n", value);
                if ((value >= 17) && (value <= 21)) {
                    printf("���� ��Ĩ�ϴ�.\n");
                    break;
                }
                continue;
            }
            else {
                printf("������ġ: %d\n", value);
                printf("�Ļ��Ͽ����ϴ�.\n");
                break;
            }
        }
        else {
            printf("������ġ: %d\n", value);
        }
    }
    return 0;
}
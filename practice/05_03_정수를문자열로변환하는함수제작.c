#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void i_to_a(int from, char to[])
{
    int tmp = from;
    int cnt = 0;

    // �ڸ��� Ȯ��
    while (tmp != 0) {
        tmp /= 10;
        cnt++;
    }

    // 0 Ȯ��
    if (from == 0) {
        strcpy(to, "0");
    }

    // ������ ���
    else if (from < 0) {
        from = -from;
        while (from != 0) {
            *(to + cnt) = (char)(from % 10 + 48); // �ƽ�Ű �ڵ�
            from = from / 10;
            cnt--;
        }
        *(to + cnt) = (char)(45);
    }
    // ����� ���
    else {
        while (from != 0) {
            cnt--;
            *(to + cnt) = (char)(from % 10 + 48);
            from = from / 10;
        }
    }
}

int main()
{
    int num;
    char str[20];

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    i_to_a(num, str);

    printf("�����: %s\n", str);

    return 0;
}
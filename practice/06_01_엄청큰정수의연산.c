#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* add_big_number(char a[], char b[], char buf[], int size)
{
    int arr_a[101] = { 0, };
    int arr_b[101] = { 0, };
    int length_a = strlen(a);
    int length_b = strlen(b);

    for (int i = 0; i < length_a; i++) {
        arr_a[size - i - 1] = a[length_a - i - 1];
    }

    for (int i = 0; i < size; i++) {
        printf("%d", arr_a[i]);
    }

}

int main()
{
    char a[100], b[100], buf[100];
    char* res;

    printf(��ù ��° �ڿ����� �Է��Ͻÿ� : ��);
    scanf("%s", a);
    printf(���� ��° �ڿ����� �Է��Ͻÿ� : ��);
    scanf(�� % s��, b);
    res = add_big_number(a, b, buf, 100);
    // res: a + b�� ���� ��� ���ڿ� ������
    // res�� buf ������ �ּҰ��� ����Ŵ

    printf(�������: %s\n��, res);
}
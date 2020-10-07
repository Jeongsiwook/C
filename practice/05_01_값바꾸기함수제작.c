#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    return 0;
}

int main()
{
    int a, b;

    printf("두 정수를 입력하세요: ");

    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("교환된 값: %d %d\n", a, b);

    return 0;
}
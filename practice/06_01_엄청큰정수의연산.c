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

    printf(“첫 번째 자연수를 입력하시오 : ”);
    scanf("%s", a);
    printf(“두 번째 자연수를 입력하시오 : ”);
    scanf(“ % s”, b);
    res = add_big_number(a, b, buf, 100);
    // res: a + b를 더한 결과 문자열 포인터
    // res는 buf 내부의 주소값을 가리킴

    printf(“결과값: %s\n”, res);
}
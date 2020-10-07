#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void i_to_a(int from, char to[])
{
    int tmp = from;
    int cnt = 0;

    // 자릿수 확인
    while (tmp != 0) {
        tmp /= 10;
        cnt++;
    }

    // 0 확인
    if (from == 0) {
        strcpy(to, "0");
    }

    // 음수일 경우
    else if (from < 0) {
        from = -from;
        while (from != 0) {
            *(to + cnt) = (char)(from % 10 + 48); // 아스키 코드
            from = from / 10;
            cnt--;
        }
        *(to + cnt) = (char)(45);
    }
    // 양수일 경우
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

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    i_to_a(num, str);

    printf("결과값: %s\n", str);

    return 0;
}
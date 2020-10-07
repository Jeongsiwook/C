#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
    int len = strlen(str);
    char tmp_str[21];
    strcpy(tmp_str, str);

    for (int i = len - 1; i >= 0; i--) {
        *(str + (len - 1 - i)) = *(tmp_str + i);
    }
}

int main()
{
    char str[21];

    printf("문자열을 입력하세요: ");
    scanf("%s", str);
    reverse(str);

    printf("뒤집힌 문자열: %s\n", str);

    return 0;
}
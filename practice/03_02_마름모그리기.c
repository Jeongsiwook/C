// "*"를 이용해 마름모 그림그리기
// 홀수를 입력받으면 대칭이 없어, 짝수는 대칭이 있어

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 30) {
        printf("너무 큽니다.");
        return 0;
    }

    // 입력한 숫자가 짝수일 경우
    if (num % 2 == 0) {        
        int share = num / 2;

        // (num / 2)의 위
        for (int i = 0; i < share; i++) {
            for (int j = 0; j < share - i - 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                printf("*");
            }
            printf("\n");
        }
        // (num / 2)의 아래
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

    // 입력한 숫자가 홀수일 경우
    else {
        int share = (num / 2) + 1;
        // (num / 2) + 1의 위
        for (int i = 0; i < share; i++) {
            for (int j = 0; j < share - i - 1; j++) {
                printf(" ");
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                printf("*");
            }
            printf("\n");
        }
        // (num / 2) + 1의 아래
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
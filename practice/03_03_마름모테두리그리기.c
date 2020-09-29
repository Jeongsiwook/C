// "*"를 이용해 마름모 테두리 그림그리기

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
            if (i == 0) {
                for (int j = 0; j < share - i - 1; j++) {
                    printf(" ");
                }
                for (int j = 0; j < (2 * i + 1); j++) {
                    printf("*");
                }
                printf("\n");
            }
            
            else {
                for (int j = 0; j < share - i - 1; j++) {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < 2 * i - 1; j++) {
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }   

        // (num / 2)의 아래
        for (int i = share; i > 0; i--) {
            if (i == 1) {
                for (int j = 0; j < share - i; j++) {
                    printf(" ");
                }
                for (int j = 0; j < (2 * i - 1); j++) {
                    printf("*");
                }
                printf("\n");
            }
            else {
                for (int j = 0; j < share - i; j++) {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < 2 * i - 3; j++) {
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }
    }

    else {
        int share = num / 2 + 1;

        // (num / 2) + 1의 위
        for (int i = 0; i < share; i++) {
            if (i == 0) {
                for (int j = 0; j < share - i - 1; j++) {
                    printf(" ");
                }
                for (int j = 0; j < (2 * i + 1); j++) {
                    printf("*");
                }
                printf("\n");
            }

            else {
                for (int j = 0; j < share - i - 1; j++) {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < 2 * i - 1; j++) {
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }

        // (num / 2) + 1의 아래
        for (int i = share - 1; i > 0; i--) {
            if (i == 1) {
                for (int j = 0; j < share - i; j++) {
                    printf(" ");
                }
                for (int j = 0; j < (2 * i - 1); j++) {
                    printf("*");
                }
                printf("\n");
            }
            else {
                for (int j = 0; j < share - i; j++) {
                    printf(" ");
                }
                printf("*");
                for (int j = 0; j < 2 * i - 3; j++) {
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }
    }

    return 0;
}
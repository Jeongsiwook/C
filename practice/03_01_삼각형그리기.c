// "*"를 이용해 삼각형 그림그리기

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

    for (int i = 0; i < num; i++) {
        
        // 빈칸 부분
        for (int j = 0; j < num - 1 - i; j++) { 
            printf(" ");
        }
        
        // * 부분
        for (int j = 0; j < (2 * i + 1); j++) { 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

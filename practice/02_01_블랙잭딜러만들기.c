// 숫자카드(2 ~ 10)의 가치는 해당 숫자
// 그림카드(J, Q, K)의 가치는 10
// A 카드의 가치는 11(파산하게    될 경우 1로 변경)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int value = 0;      // 누적 가치에 대한 변수
    int a_check = 0;    // A 카드 갯수 확인 변수

    while (card_name[0] != 'X') {   // X를 입력받으면 프로그램 종료
        printf("카드이름을 입력하세요: ");
        scanf("%2s", card_name);
        int val = 0;    // 현재 가치에 대한 변수

        switch (card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            a_check++;  // A가 들어올 때 +1
            break;
        case 'X':
            continue;
        default:
            val = atoi(card_name);

            if ((val < 2) || (val > 10)) {
                printf("값을 알 수 없습니다.\n");
                continue;
            }
        }
        value += val;   // 누적 가치에 카드 값들 저장

        if ((value >= 17) && (value <= 21)) {
            printf("누적가치: %d\n", value);
            printf("딜을 마칩니다.\n");
            break;
        }
        else if (value > 21) {
            if (a_check > 0) {  // 21을 초과했을 때 A 카드가 있는 지 확인
                value -= 10;
                a_check--;
                printf("누적가치: %d\n", value);
                if ((value >= 17) && (value <= 21)) {
                    printf("딜을 마칩니다.\n");
                    break;
                }
                continue;
            }
            else {
                printf("누적가치: %d\n", value);
                printf("파산하였습니다.\n");
                break;
            }
        }
        else {
            printf("누적가치: %d\n", value);
        }
    }
    return 0;
}

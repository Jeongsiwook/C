#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct INFOR {
    char id[21];
    char name[21];
    int lan;
    int eng;
    int mat;
};

int sum(struct INFOR* s)
{
    int res = 0;
    return res = s->lan + s->eng + s->mat;
}

double avg(struct INFOR* s)
{
    double res = 0;
    return res = (double)((s->lan + s->eng + s->mat) / 3);
}

int main()
{
    int i = 0;
    int cnt = 0;
    struct INFOR s[100];

    while (1)
    {
        scanf("%s", s[i].id);

        // 종료 조건
        if (s[i].id[0] == '0') {
            break;
        }

        scanf("%s %d %d %d", s[i].name, &s[i].lan, &s[i].eng, &s[i].mat);

        i++;
        cnt++;
    }

    printf("학번        이름  국어 영어 수학 총점 평균\n");
    printf("===========================================\n");

    for (int i = 0; i < cnt; i++) {
        printf("%s %s %-4d %-4d %-4d %-4d %3.1lf\n", s[i].id, s[i].name, s[i].lan, s[i].eng, s[i].mat, sum(&s[i]), avg(&s[i]));
    }

    printf("===========================================\n");

    double lanSum = 0;
    double engSum = 0;
    double matSum = 0;
    int sumSum = 0;
    double avgAvg = 0;

    for (int i = 0; i < cnt; i++) {
        lanSum += s[i].lan;
        engSum += s[i].eng;
        matSum += s[i].mat;
        sumSum += sum(&s[i]);
        avgAvg += avg(&s[i]);
    }

    printf("        전체 평균 %3.1f %3.1f %3.1f %d  %3.1f", lanSum / cnt, engSum / cnt, matSum / cnt, sumSum, avgAvg / cnt);
    return 0;
}
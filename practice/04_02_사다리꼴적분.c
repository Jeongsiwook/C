#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// f(x) = ax^2 + bx + c 값을 구하는 함수
double func(double a, double b, double c, double x)
{
    return a * x * x + b * x + c;
}

// 적분 함수
double integ(double start, double end, double step, double a, double b, double c)
{
    double ans = 0;                          // 결과 변수
    int share = (int)((end - start) / step); // 사다리꼴의 갯수 변수

    // 직사각형의 갯수만큼 반복하면서 사다리꼴들의 합을 구함
    for (int i = 0; i < share; i++) {
        double up = func(a, b, c, start + (step * i));          // 윗변 변수
        double down = func(a, b, c, start + (step * (i + 1)));  // 아랫변 변수
        ans += (up + down) * step / 2;                          // 사다리꼴 넓이 공식
    }

    // 나머지 사다리꼴
    if ((end - start) - (share * step)) {
        double up = func(a, b, c, (end - (end - start - share * step)));
        double down = func(a, b, c, end);
        ans += (up + down) * (end - start - share * step) / 2;
    }

    return ans;
}

int main()
{
    double a, b, c;
    double start, end, step;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    printf("start: ");
    scanf("%lf", &start);

    printf("end: ");
    scanf("%lf", &end);

    printf("step: ");
    scanf("%lf", &step);

    printf("area: %lf",
        integ(start, end, step, a, b, c));
}

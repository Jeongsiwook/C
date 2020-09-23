#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// f(x) = ax^2 + bx + c를 적분한 값을 구하는 함수
double func(double a, double b, double c, double x)
{
    return a * x * x * x / 3 + b * x * x / 2 + c * x;
}

// 적분 함수
double integ(double start, double end, double a, double b, double c)
{
    return func(a, b, c, end) - func(a, b, c, start);
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

    printf("area: %lf",
        integ(start, end, a, b, c));
}
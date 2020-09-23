#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// f(x) = ax^2 + bx + c ���� ���ϴ� �Լ�
double func(double a, double b, double c, double x)
{
    return a * x * x + b * x + c;
}

// ���� �Լ�
double integ(double start, double end, double step, double a, double b, double c)
{
    double ans = 0;                          // ��� ����
    int share = (int)((end - start) / step); // ��ٸ����� ���� ����

    // ���簢���� ������ŭ �ݺ��ϸ鼭 ��ٸ��õ��� ���� ����
    for (int i = 0; i < share; i++) {
        double up = func(a, b, c, start + (step * i));          // ���� ����
        double down = func(a, b, c, start + (step * (i + 1)));  // �Ʒ��� ����
        ans += (up + down) * step / 2;                          // ��ٸ��� ���� ����
    }

    // ������ ��ٸ���
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
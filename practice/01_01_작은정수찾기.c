// 사용자에게 정수 두 개를 입력 받음
// 어느 정수가 더 작은 지 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void min(int num1, int num2) 
{
	int flag = num1 - num2;

	if (flag > 0) {
		printf("%d is smaller.\n", num2);
	}
	else if (flag < 0) {
		printf("%d is smaller.\n", num1);
	}
	else {
		printf("They are the same.\n");
	}
}
int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	min(num1, num2);

	return 0;	
}
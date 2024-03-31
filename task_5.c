/*
#include <stdio.h>

long int fact(int n);

int main() {
	int n, result;
	printf("정수를 입력하세요\n");
	scanf_s("%d", &n);
	result = fact(n);
	printf("\n%d의 팩토리얼 값은 %ld입니다.\n", n, result);
	//getchar(); getchar();
	return 0;
}

long int fact(int n) {
	int value;
	if (n <= 1) {
		printf("fact(1) 함수 호출!\n");
		printf("fact(1) 값 1 반환!\n");
		return 1;
	}
	else {
		printf("fact(%d) 함수 호출!\n", n);
		value = (n * fact(n - 1));
		printf("fact(%d) 값 %d 반환!\n", n, value);
		return value;
	}
}
*/
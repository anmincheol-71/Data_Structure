/*
#include <stdio.h>

long int fact(int n);

int main() {
	int n, result;
	printf("������ �Է��ϼ���\n");
	scanf_s("%d", &n);
	result = fact(n);
	printf("\n%d�� ���丮�� ���� %ld�Դϴ�.\n", n, result);
	//getchar(); getchar();
	return 0;
}

long int fact(int n) {
	int value;
	if (n <= 1) {
		printf("fact(1) �Լ� ȣ��!\n");
		printf("fact(1) �� 1 ��ȯ!\n");
		return 1;
	}
	else {
		printf("fact(%d) �Լ� ȣ��!\n", n);
		value = (n * fact(n - 1));
		printf("fact(%d) �� %d ��ȯ!\n", n, value);
		return value;
	}
}
*/
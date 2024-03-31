#include <stdio.h>

void hanoi(int n, char from, char tmp, char to);


int main(void) {
	int n = 3;

	hanoi(n, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char from, char temp, char to) {
	if (n == 1) {
		printf("%c���� ���� 1��(��) %c�� �ű�. \n", from, to);
	}
	else {
		hanoi(n - 1, from, to, temp);
		printf("%c���� ���� %d��(��) %c�� �ű�. \n", from, n, to);
		hanoi(n - 1, temp, from, to);
	}
}
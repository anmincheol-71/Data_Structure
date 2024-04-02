#include "listS.h"

int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0;

	for (i = 0; i < n; i++) {
		//입력값이 어떤 위치에 들어가야 순차적인지 확인하는 코드
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n)
		k = n;

	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x;
	return move;
}

int deleteElement(int L[], int n, int x) {
	int i, k = n, move = 0;

	for (i = 0; i < n; i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}

	if (i == n) move = n;

	for (i = k; i < n; i++) {
		L[i] = L[i + 1];
		move++;
	}

	return move;
}

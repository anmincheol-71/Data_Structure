
#include <stdio.h>
#include "listS.h"

int main(void) {
	//list -> base Adress�����ּ�
	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
	int i, move, size = 6;
	printf("\n���� �� ���� ����Ʈ : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n������ ���� : %d \n", size);

	//�Լ� ����Ŭ�� �� F12, Ctrl + Tab���� ȭ�� ��ȯ
	//(�迭�ǽ����ּ�(list = &list[0]), size(�迭ũ��), 30)
	//result���� int�� move / move�� �ڸ��̵� Ƚ�� ī����
	move = insertElement(list, size, 30);

	printf("\n���� �� ���� ����Ʈ : ");
	for (i = 0; i <= size; i++) printf("%3d ", list[i]);
	printf("\n������ ���� : %d \n", ++size);
	printf("\n�ڸ� �̵� Ƚ�� : %d \n", move);

	move = deleteElement(list, size, 40);
	if (move == size) printf("\n���� ����Ʈ�� ���Ұ� ��� ������ �� �����ϴ�.\n");
	else {
		printf("\n���� �� ���� ����Ʈ : ");

		for (i = 0; i < size - 1; i++) printf("%3d ", list[i]);
		printf("\n������ ���� : %d \n", --size);
		printf("\n�ڸ� �̵� Ƚ�� : %d \n", move);
	}

	getchar(); return 0;
}

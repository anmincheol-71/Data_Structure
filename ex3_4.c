
#include <stdio.h>
#include "listS.h"

int main(void) {
	//list -> base Adress시작주소
	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
	int i, move, size = 6;
	printf("\n삽입 전 선형 리스트 : ");
	for (i = 0; i < size; i++) printf("%3d ", list[i]);
	printf("\n원소의 갯수 : %d \n", size);

	//함수 더블클릭 후 F12, Ctrl + Tab으로 화면 전환
	//(배열의시작주소(list = &list[0]), size(배열크기), 30)
	//result값은 int형 move / move는 자리이동 횟수 카운터
	move = insertElement(list, size, 30);

	printf("\n삽입 후 선형 리스트 : ");
	for (i = 0; i <= size; i++) printf("%3d ", list[i]);
	printf("\n원소의 갯수 : %d \n", ++size);
	printf("\n자리 이동 횟수 : %d \n", move);

	move = deleteElement(list, size, 40);
	if (move == size) printf("\n선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n");
	else {
		printf("\n삭제 후 선형 리스트 : ");

		for (i = 0; i < size - 1; i++) printf("%3d ", list[i]);
		printf("\n원소의 갯수 : %d \n", --size);
		printf("\n자리 이동 횟수 : %d \n", move);
	}

	getchar(); return 0;
}

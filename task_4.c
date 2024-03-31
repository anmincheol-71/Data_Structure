/*
#include <stdio.h>

int main() {
	char info[3][20] = { "이름", "학과", "학번" };
	char stu[2][3][20];
	//char stu[2][3][20] = { {"Hong Gil Dong", "Computer Electronic", "202100101"}, {"Hong Gil Soon", "Computer Science", "202100102"} };
	int i, j, k;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("\n학생 %d의 %s : ", i + 1, info[j]);
			gets(stu[i][j]);
			for (k = 19; stu[i][j][k] != '\0'; k--) {
				stu[i][j][k] = '\0';
			}
		}
		printf("\n");
	}

	printf("\n\n\n");

	for (i = 0; i < 2; i++) {
		printf("학생%d\n", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\t");
			for (k = 0; k < 20; k++) {
				printf("%c", stu[i][j][k]);
			}
			// for (k = 0; stu[i][j][k] != '\0'; k++)

			printf("\n"); 
		}
	}

	return 0;
}
*/
#include<stdio.h>

int main() {
	int num;
	scanf_s("%d", &num);
	if (num >= 1 && num <= 100) {
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < i; j++) {
				printf("* ");
			}
			printf("\n");
		}
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num - i; j++) {
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
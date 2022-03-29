#include <stdio.h>

int main() {
	int x;
	int y;

	printf("input x and y\n");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1\n");
	}
	else if (x < 0 && y > 0) {
		printf("2\n");
	}
	else if (x < 0 && y < 0) {
		printf("3\n");
	}
	else {
		printf("4\n");
	}

	return 0;
}
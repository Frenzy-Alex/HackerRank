#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if (num == 1){ printf("one\n"); }
	else if (num == 2){ printf("two\n"); }
	else if (num == 3){ printf("three\n"); }
	else if (num == 4){ printf("four\n"); }
	else if (num == 5){ printf("five"); }
	else if (num == 6){ printf("six\n"); }
	else if (num == 7){ printf("seven\n"); }
	else if (num == 8){ printf("eight\n"); }
	else if (num == 9){ printf("nine\n"); }
	else if (num > 9){ printf("Greater than 9\n"); }
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0;
	long l = 0;
	long long ll = 0;
	char c = 0;
	float f = 0;
	double d = 0;
	scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &c, &f, &d);
	printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", i, l, ll, c, f, d);
	return 0;
}

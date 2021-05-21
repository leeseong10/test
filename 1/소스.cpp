#include <stdio.h>
#pragma warning (disable:4996)

#include <iostream>
#include <limits>

using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n);
	return 0;
	

	char x;
	scanf("%c", &x);
	printf("%c", x);

	float x;
	scanf("%f", &x);
	printf("%f", x);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d%d", a, b);

	char x, y;
	scanf("%c%c", &x, &y);
	printf("%c%c", y, x);

	float k;
	scanf("%f", &k);
	printf("%.3f", k);

	int a;
	scanf("%d", &a, &a, &a);
	printf("%d%d%d", a, a, a);

	char h, m;
	scanf("%d:%d", &h, &m);
	printf(h, ":", m);

	19char y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("")

	char x, y;
	scanf("%d-%d", &x, &y);
	printf("%d%d", x, y);
}
#include <stdio.h>
#pragma warning (disable:4996)

#include <iostream>
#include <limits>

using namespace std;

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", -a);

	char a;
	scanf_s("%c", &a);
	printf("%d", (int)a);

	int x;
	scanf("%d", &x);
	printf("%f", (float)x);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a % b);

	int x;
	scanf("%d", &x);
	printf("%d", x++);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a + b);
	printf("%d", a - b);
	printf("%d", a * b);
	printf("%d", a / b);
	printf("%d", a % b);
	printf("%3f", a / b)

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", (a + b + c)\n);
	printf("%d", (a + b + c) / 3);

	int k = 10;
	printf("%d", a << 1);
	printf("%d", a >> 1);
	printf("%d", a << 2);
	printf("%d", a >> 2);

	int a = 1, b = 10;
	printf("%d", a << b);

	printf("%d", 123 < 456);

}
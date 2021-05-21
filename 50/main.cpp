#include <stdio.h>
#pragma warning (disable:4996)

#include <iostream>
#include <limits>

using namespace std;
int main() {

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a == b);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", b >= a);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a != b);

	int a;
	scanf("%d%d", &a);
	printf("%d", !a);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a && b);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a || b);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", (a && !b) || (!a && b);

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", (a && b) || (!a && !b));

	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", !a && !b);

	int a, b;
	scanf("%d%d", &a, &b);

	59~62
}
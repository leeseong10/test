#include <stdio.h>
#pragma warning (disable:4996)

#include <iostream>
#include <limits>

using namespace std;
int main() {
	char data[51] = "";
	scanf("%s", data);

	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);

	float x, y;
	scanf("%d.%d", &x, &y);
	printf("%d%d", x, y);

	char d[30];
	scanf("%s", d);
	for (i = 0; d[i] != '\0'; i++) {
		printf("\'%c\'", d[i]);
	}

	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]", a * 10000, b * 1000, c * 100, d * 10, e);

	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);

	int y, m, d;
	scanf("%04d-%02d-%02d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);

	unsigned int n;
	scanf("%u", &n);
	printf("%u", n);

	double d;
	scanf("%lf", &d);
	printf("%lf", d);

	long long int n;
	scanf("%lld", &n);
	printf("%lld", n);



}

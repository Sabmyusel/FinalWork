#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, d, sum=0, k1, k2, k3;
	printf("������� ����� a: "); scanf("%d", &a);
	printf("������� ����� b: "); scanf("%d", &b);
	printf("������� ����� c: "); scanf("%d", &c);
	printf("������� ����� d: "); scanf("%d", &d);
	printf("������� ����� k1: "); scanf("%d", &k1);
	printf("������� ����� k2: "); scanf("%d", &k2);
	printf("������� ����� k3: "); scanf("%d", &k3);
	if (a % k1 == 0 && a >= k2 && a <= k3)
	{
		sum += a;
	}
	if (b % k1 == 0 && b >= k2 && b <= k3)
	{
		sum += b;
	}
	if (c % k1 == 0 && c >= k2 && c <= k3)
	{
		sum += c;
	}
	if (d % k1 == 0 && d >= k2 && d <= k3)
	{
		sum += d;
	}
	printf("\n���������: %d\n", sum);
	system("pause");
	return 0;
}
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#define n 10
#define m 100
#include <stdio.h>
#include <locale.h>
#include <math.h>
int lab11task0()
{
	float A[n], B[n], temp, s = 0;
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		B[i] = A[i] / 10;
	}
	for (int i = 0; i < n; i++)
	{
		printf("| a[%d] | %+15.5f |%+15.5f |\n", i, A[i], B[i]);
		s += A[i];
	}
	printf("Среднее арифметическое равно %.5f", s / n);

}
float lab8(float x)
{
	float y;
	y = pow(x, 2) - pow(cos(x + 1), 2);
	return (y);
}
float lab11task2()
{
	float A[m], x=0.1, n1=0, n2 = 0, z1=0, z2 = 0;
	for (int i = 0; i < m; i++)
	{
		x += 0.01;
		A[i] = lab8(x);
	}
	for (int i = 0; i < m; i++)
	{
		if (A[i] > 0)
		{
			n1 += A[i];
			z1 += 1;
		}
		else
		{
			n2 += A[i];
			z2 += 1;
		}
	}
	printf("A[n]\n");
	printf("Накопленое положительных =%f\n", n1);
	printf("Накопленое отрицательных =%f\n", n2);
	printf("Число положительных = %.0f\n", z1);
	printf("Число отрицательных = %.0f\n", z2);
	printf("Среднее = %f\n", n1/z1);
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите номер задания лабораторной ");
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		lab11task0();
		break;
	case '2':
		lab11task2();
		break;
	default:
		printf("Неизвестная операция.\n");
	}
}
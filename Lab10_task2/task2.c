#include <locale.h>
#include <stdio.h>
#include <math.h>
double sin1(double x)
{
	double x1 = sin(x);

 }
int main(void)
{
	setlocale(LC_ALL, "RUS");
	double x;
	printf("������� x:");
	scanf_s("%lf", &x);
	printf("����� ����� = %lf", sin1(x));

}
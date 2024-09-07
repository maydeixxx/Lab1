#include <stdio.h>
#include <math.h>

int main()
{
	float y, z;
	printf("input y");
	scanf_s("%f", &y);

	printf("input z");
	scanf_s("%f", &z);

	float t = sin(2 + z);
	float x = 6 * pow(t, 2) - ((cos(z) / sin(z)) + 1) / pow(y, 2);

	printf("x = %.4f", x);
}
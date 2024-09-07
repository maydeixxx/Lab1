#include <stdio.h>
#include <math.h>

int main()
{
	float t, z;
	printf("input t");
	scanf_s("%f", &t);

	printf("input z");
	scanf_s("%f", &z);

	float y = cos(t + z);
	float x = 4 * log(pow(y, 3)) - z / t;

	printf("x = %.2f", x);
}

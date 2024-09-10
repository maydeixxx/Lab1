#include <stdio.h>
#include <math.h>

int main()
{
	float t, z;
	printf("Input t:");
	scanf("%f", &t);

	printf("Input z:");
	scanf("%f", &z);

	float y = sin(t);
	float x = 4 * pow(y, 2) / (4 * y * exp(z) - 2 * pow(t, 3));

	printf("x = %.2f", x);
}

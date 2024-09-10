#include <stdio.h>
#include <math.h>

int main()
{
	float y, z;
	printf("Input y:");
	scanf("%f", &y);

	printf("Input z:");
	scanf("%f", &z);

	float t = sin(2 + z);
	float x = 6 * pow(t, 2) - ((cos(z) / sin(z)) + 1) / pow(y, 2);

	printf("x = %.4f", x);
}

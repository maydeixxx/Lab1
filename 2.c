#include <stdio.h>
#include <math.h>

int main()
{
	float t, z;

	printf("Input t:");
	scanf_s("%f", &t);

	printf("Input z:");
	scanf_s("%f", &z);

	float y = t + 2 * (cos(z) / sin(z));
	float x = 3 * pow(y, 2) / (4 * tan(z) - 2 * pow(t, 2));

	printf("x = %.2f", x);
	
}

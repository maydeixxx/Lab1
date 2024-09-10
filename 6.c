#include <stdio.h>
#include <math.h>

int main()
{
	float t, z;
	printf("Input z:");
	scanf("%f", &z);

	printf("Input t:");
	scanf("%f", &t);

	float y = tan(t) + z;
	float x = (8 * pow(z, 2) + 1) / (y * exp(t) + pow(t, 2));
	
	printf("x = %.2f", x);
}

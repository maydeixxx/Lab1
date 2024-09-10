#include <stdio.h>
#include <math.h>

int main()
{
	float t, z;
	printf("Input t:");
	scanf("%f", &t);

	printf("Input z:");
	scanf("%f", &z);

	float y = cos(t + z);
	float x = 4 * log(pow(y, 3)) - z / t;

	printf("x = %.2f", x);
}

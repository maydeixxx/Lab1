#include <stdio.h>
#include <math.h>

int main() 
{
	float y, z;
	printf("Input y:");
	scanf("%f", &y);

	printf("Input z:");
	scanf("%f", &z);

	float t = 5 / (1 + pow(y, 2));
	float x = 2 * y + 3 * sinh(t) - z;

	printf("x = %.2f", x);
}

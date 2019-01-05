#include <stdio.h>

float calculate_Circumference(const float, float)
float calculate_area(const float, float)

int main(void)
{
	float circ;
	float radius;
	const float PI = 3.1416;

	printf("\nPlease enter the value of the radius : ");
	scanf("%f", &radius);

	circ = calculate_Circumference(PI, radius);
	circ2 = calculate_area(PI, radius);	

	printf("\nRadius is : %10.f", radius);
	printf("\nCircumference is : %10.2f", circ);
	printf("\narea is : %10.2f", circ2);
	printf("\n");

	return 0;



}

float calculate_Circumference(const float PI, float radius)
{
	float result;
	result = 2 * PI * radius;
	return result;

}

float calculate_area(const float PI, float radius)
{
	float result;
	result = PI * radius * radius;
	return result;


}

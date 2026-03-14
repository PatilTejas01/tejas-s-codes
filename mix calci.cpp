#include <stdio.h>
int main()
{
	float num1, num2;
	printf("enter first number:");
	scanf("%f",&num1);
	
	printf("enter second number:");
	scanf("%f", &num2);
	
	printf("\nresult:\n");
	printf("addition = %.2f\n",num1 + num2);
	printf("substraction = %.2f\n", num1 - num2);
	printf("multiplication = %.2f\n", num1 * num2);
	printf("division = %.2f\n", num1 / num2);
	return 0;
}

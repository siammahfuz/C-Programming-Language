#include<stdio.h>
int main()
{
	int number1, number2;

	printf("Please Enter a number: ");
	scanf("%d", &number1);

	printf("Please Enter another number: ");
	scanf("%d", &number2);

	printf("%d + %d = %d\n", number1, number2, number1 + number2);
	printf("%d - %d = %d\n", number1, number2, number1 - number2);
	printf("%d * %d = %d\n", number1, number2, number1 * number2);
	printf("%d / %d = %d\n", number1, number2, number1 / number2);

	return 0;


}

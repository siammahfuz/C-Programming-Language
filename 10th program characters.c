#include<stdio.h>

int main()
{
	char ch;
	printf("Enter the first letter of your name: ");

	scanf("%c", &ch);

	ch = getchar();

	printf("Enter the first letter of your name is : %c\n", ch);

	return 0;
}

//Ввести три целых числа. Вычислить и вывести остаток от деления второго числа на первое.

#include <stdio.h>


main()
{
	int a, b, c;
	printf("Input the 1-st number \n");
	scanf_s("%d", &a);
	printf("Input the 2-nd number \n");
	scanf_s("%d", &b);
	printf("Input the 3-rd number \n");
	scanf_s("%d", &c);
	b = b % a;
	printf("Remainder: \n");
	printf("%d", b);
	return 0;
}

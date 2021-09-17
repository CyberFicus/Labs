//Ввести целое число N. Вывести количество десятичных цифр, необходимых для представления этого числа.

#include <stdio.h>


main()
{
	int n = 0, c = 0;
	printf("Input N \n");
	scanf_s("%d", &n);
	if (n == 0)
		n = 1;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		c += 1;
	}
	printf("Result: %d", c);
	return 0;
}

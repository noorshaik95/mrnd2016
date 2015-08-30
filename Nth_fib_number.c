#include<stdio.h>
int fibonacci(int n);
void main()
{
	int num, value;
	printf("Enter a number\n");
	scanf("%d", &num);
	value = fibonacci(num);
	printf("The value of %d fibonacci number is %d", num, value);
}
int fibonacci(int n)
{
	int s = 0, a = 0, b = 1;
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
	{
		while ((n-2) != 0)
		{
			s = a + b;
			a = b;
			b = s;
			n--;
		}
	}
	return s;
}
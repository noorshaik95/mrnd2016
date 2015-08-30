#include<stdio.h>
int sum(int n);
void main()
{
	int k, p;
	printf("Enter any number\n");
	scanf_s("%d", &k);
	p = sum(k);
	printf("Sum of digits is %d\n", p);
	getch();
}
int sum(int n)
{
	int s = 0, q;
	while (n != 0)
	{
		q = n % 10;
		s = s + q;
		n = n / 10;
	}
	return s;
}
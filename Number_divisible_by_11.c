#include<stdio.h>
int Divide(int num);
void main()
{
	int num, val, a[20], i = 0, temp, size, odd = 0, even = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("%d", num);
	val = Divide(num);
	if (val == 0)
		printf("Divisble");
	else
		printf("Not Divisivle");
}
int Divide(int num)
{
	int i = 0, temp, a[20], size, odd = 0, even = 0, val;
	temp = num;
	while (temp)
	{
		a[i] = temp % 10;
		temp = temp / 10;
		i++;
	}
	size = i - 1;
	printf("Size is %d\n", size);
	for (i = 0; i <= size; i++)
	{
		even = even + a[i];
		i++;
	}
	for (i = 1; i <= size; i++)
	{
		odd = odd + a[i];
		i++;
	}
	printf("\nSum is %d\t %d\n", even, odd);
	val = even - odd;
	if (val == 0)
		return val;
	else if (val < 0)
		return -1;
	else
		return (val = Divide(val));
}

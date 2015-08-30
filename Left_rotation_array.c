#include<stdio.h>
void rotate(int *a, int size, int n);
void main()
{
	int a[20], size, n, i,r;
	printf("Enter the size of the array\n");
	scanf("%d", &size);
	printf("Enter the numbers\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter number of times array has to rotated\n");
	scanf("%d", &n);
	r = n%size;
	rotate(a, size, r);
	for (i = 0; i < size; i++)
		printf("%d", a[i]);
}
void rotate(int *a, int size, int r)
{
	int i, temp;
	if (r == 0)
	{
		for (i = 0; i < size; i++)
			printf("%d\t", a[i]);
	}
	else
	{
		while (r != 0)
		{
			temp = a[size - 1];
			for (i = size-1; i >0 ; i--)
			{
				a[i] = a[i-1];
			}
			a[0] = temp;
			r--;
		}
	}
}
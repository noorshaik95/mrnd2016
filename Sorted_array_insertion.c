#include<stdio.h>
void insert(int *a,int n,int num);
void main()
{
	static int a[20], n, num,  i;
	printf("Enter the range of the array\n");
	scanf("%d", &n);
	printf("Enter a sequence of sorted numbers upto %d\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the number to be inserted in the array\n");
	scanf("%d", &num);
	insert(a, n, num);
	for (i = 0; i <= n; i++)
		printf("%d\n", a[i]);
}
void insert(int *a, int n, int num)
{
	int i, count = 0 , j;
	for (i = 0; i < n; i++)
	{
		if (count == 1)
			break;
		if (num <= a[i])
		{
			for (j = n; j >= i; j--)
			{
				a[j + 1] = a[j];
			}
			a[i] = num;
			count++;
		}
		else if (num >= a[i])
		{
			a[n] = num;
		}
	}
}
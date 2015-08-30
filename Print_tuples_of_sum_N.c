#include<stdio.h>
void tuples(int *, int, int);
int compare(int[], int[][2]);
int size;
void main()
{
	int a[20], num, i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the elements\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter any number\n");
	scanf("%d", &num);
	tuples(a, size, num);
}
void tuples(int *a, int size, int num)
{
	int i, j, k;
	int res[10][2];
	int temp[2], v = 0, ans;
	for (i = 0; i<size; i++)
	{
		for (j = 0; j<size; j++)
		{
			if (a[i] + a[j] == num)
			{
				if (i == j)
				{
					break;
				}
				temp[0] = a[i];
				temp[1] = a[j];
				ans = compare(temp, res);
				if (ans == 1)
				{
					res[v][0] = temp[0];
					res[v][1] = temp[1];
					v++;
				}
			}
		}
	}
	printf("\nThe tuples are\n");
	for (i = 0; i<v; i++)
	{
		printf("<%d,%d>\t", res[i][0], res[i][1]);
	}
}
int compare(int *temp, int res[][2])
{
	int i, j, k, a;
	a = temp[0];
	for (i = 0; i<10; i++)
	{
			if (a == res[i][0] || a == res[i][1])
			{
				return 0;
			}
	}
	return 1;
}

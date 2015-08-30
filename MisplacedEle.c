#include<stdio.h>
#include<malloc.h>
void swap(int, int);
void sort(int *, int size);
int a[10];
void main()
{
	int size, i;
	printf("Enter the range of the array\n");
	scanf("%d", &size);
	printf("Enter the elements\n");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, size);
	for (i = 0; i < size; i++)
	{
		printf("%d\t", a[i]);
	}
}
void sort(int *a, int size)
{
	int first = -1, second = -1, i;
	for (i = 0; i < size; i++)
	{
		if (first == -1)
		{
			if (i == 0)
			{
				if (a[i] > a[i + 1])
				{
					first = i;
				}
			}
			else if (i == size - 1)
			{
				break;
			}
			else if (!(a[i] < a[i + 1] && a[i] > a[i - 1]))
				{
					first = i;
				}
		}
		else if (second == -1)
		{
			
			 if (i == size - 1)
			{
				second = i;
			}
			else
			{
				if (!(a[i] > a[i + 1] && a[i] < a[i - 1]))
				{
					second = i;
				}
			}
		}
	}
	if(!(first==-1))
         swap(first, second);
}
void swap(int first,int second)
{
	a[first] = a[first] + a[second];
	a[second] = a[first] - a[second];
	a[first] = a[first] - a[second];
}
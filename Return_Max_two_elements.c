#include<stdio.h>
 maximum(int *a, int size,int *b);
void main()
{
	int a[20], size, i, b[2];
	printf("Enter the range of array\n");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
		scanf("%d", &a[i]);
	maximum(a, size, b);
	printf("%d %d", b[0], b[1]);
}
 maximum(int *a, int size, int *b)
{
	int i, l1, l2, temp;
	l1 = a[0];
	l2 = a[0];
	for (i = 1; i < size; i++)
	{
		if (a[i] > l1)
			l1 = a[i];
		 if(l2<l1)
		{
			temp = l1;
			l1 = l2;
			l2 = temp;
		}
		
	}
	b[0] = l1;
	b[1] = l2;
}
#include<stdio.h>
int permutation(char *, char);
static int ascii[255];
void main()
{
	char a[20], b[20];
	int k;
	printf("Enter a string\n");
	gets(a);
	printf("Enter second string\n");
	gets(b);
	k = permutation(a, b);
	if (k == 0)
		printf("True");
	else
		printf("False");
}
int permutation(char *a, char *b)
{
	int l1, l2, i, j, flag = 0, k, p;
	for (l1 = 0; a[l1] != '\0'; l1++);
	for (l2 = 0; b[l2] != '\0'; l2++);
	for (i = 0; i < l1; i++)
	{
		k = a[i];
		ascii[k] = ascii[k] + 1;
	}
	for (j = 0; j < l2; j++)
	{
		p = b[j];
		if (ascii[p] <= 0)
		{
			return flag = -1;
		}
		else
			ascii[p] -= ascii[p];
	}
	return flag = 0;
}
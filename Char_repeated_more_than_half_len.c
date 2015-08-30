#include<stdio.h>
char repeat(char *, int);
void main()
{
	char a[20], i = { '\0' };
	int len;
	printf("Enter a string\n");
	gets(a);
	for (len = 0; a[len] != '\0'; len++);
	i = repeat(a, len);
	printf("Character is %c", i);
}
char repeat(char *a, int len)
{
	int i, j, count = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		count = 0;
		for (j = i + 1; a[j]; j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count > (len / 2)||count==(len/2))
			return a[i];
	}
	return '\0';
}
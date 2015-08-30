#include<stdio.h>
char find(char *,int);
void main()
{
	int k;
	char ch, str[50];
	printf("Enter a string\n");
	scanf("%[^\n]s", str);
	printf("Enter a key value");
	scanf("%d", &k);
	ch = find(str,k);
	printf("element at %d from last is %c", k, ch);
}
char find(char *str,int k)
{
	int i, j = -1;
	for (i = k - 1; str[i] != '\0'; i++)
	{
		j++;
	}
	return str[j];
}

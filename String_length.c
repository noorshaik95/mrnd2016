#include<stdio.h>
#include<stdlib.h>
int string(char *);
void main()
{
	char str[20], i;
	printf("Enter a string\n");
	gets(str);
	i = string(str);
	printf("length is %d\n", i);
}
int string(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
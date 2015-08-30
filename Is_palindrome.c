#include<stdio.h>
int palindrome(char *);
void main()
{
	char str[20];
	int val;
	printf("Enter a string\n");
	gets(str);
	val = palindrome(str);
	if (val == 0)
		printf("String is palindrome\n");
	else if(val==-1)
		printf("String is not palindrome\n");
}
int palindrome(char *str)
{
	int len, i, j, flag = 0;
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0, j = len-1; i <j ; i++, j--)
	{
		if (str[i] != str[j])
		{
			flag = -1;
			return -1;
		}
	}
	return 0;
}
#include<stdio.h>
int greater(char *a, char *b, int i, int j);
void main()
{
	char a[20], b[20], *c, *d;
	int i, j, r, l1, l2;
	printf("Enter a string\n");
	scanf("%s", a);
	printf("Enter another string\n");
	scanf("%s", b);
	for (l1 = 0; a[l1] != '\0'; l1++);
	for (l2 = 0; b[l2] != '\0'; l2++);
	r = greater(a, b, l1, l2);
	if (r == 0)
		printf("Both are equal\n");
	else if (r == 1)
		printf("The first string is greater\n");
	else
		printf("The second string is greater\n");

}
int greater(char *a, char *b, int p, int q)
{
	int i = 0, j = 0;
	while (a[i] == '0')
		i++;
	while (b[j] == '0')
		j++;
	if ((p - i) > (q - j))
		return 1;
	else if ((p - i) < (q - j))
		return 2;
	while (a[i])
	{
		if (a[i] > b[j])
			return 1;
		else if(a[i] < b[j])
			return 2;
		i++;
		j++;
	}
	return 0;
}
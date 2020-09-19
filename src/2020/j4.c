#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

void swap(char *a, char *b);

int main(int argc, char **argv)
{
	char string1[MAX];
	scanf("%s", string1);
	char string2[MAX];
	scanf("%s", string2);	
	
	int i, j;

	for (j = 0; j < strlen(string2); j++)
	{
		for (i = 0; i < strlen(string2) - 1; i++)
		{
			swap(&string2[i], &string2[i+1]);
		}
		if (strstr(string1, string2) != NULL) 
		{
			printf("yes\n");
			exit(0);
		}
	}
	printf("no\n");
}

void swap(char *a, char *b)
{
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
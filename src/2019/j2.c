#include <stdio.h>

int main(int argc, char ** argv)
{
	int lines;
	scanf("%d", &lines);

	char symbols[lines];
	int counts[lines];
	
	for (int i = 0; i < lines; i++)
	{
		scanf("%d %c", &counts[i], &symbols[i]);
	}

	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < counts[i]; j++)
		{
			putchar(symbols[i]);
		}
		putchar('\n');
	}
}
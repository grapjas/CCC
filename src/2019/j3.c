#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main(int argc, char ** argv)
{
	int lines;
	scanf("%d", &lines);
	
	char *texts[lines];

	for (int i = 0; i < lines; i++)
	{
		texts[i] = (char *)malloc(MAX*sizeof(char));
		//fgets(texts[i], MAX, stdin);
		scanf("%1000s", texts[i]);
	}
	
	for (int i = 0; i < lines; i++)
	{
		char prevChar = texts[i][0];
		int cnt = 0;

		for (int j = 0; j <= strlen(texts[i]); j++)
		{
			if (prevChar == texts[i][j])
			{
				++cnt;
			}
			else 
			{
				if (j == strlen(texts[i]))
				{
					printf("%d %c", cnt, prevChar);
				}
				else 
				{
					printf("%d %c ", cnt, prevChar);
					cnt = 1;
				}
			}
			prevChar = texts[i][j];
		}
		putchar('\n');
	}
}
#include <stdio.h>

int main(int argc, char **argv)
{
	int input, score = 0;
	
	for (int i = 1; i < 4; i++)
	{
		scanf("%d", &input);
		score += (input*i);
	}

	if (score >= 10)
	{
		puts("happy");
	}
	else 
	{
		puts("sad");
	}
	return 0;
}
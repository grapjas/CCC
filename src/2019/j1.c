#include <stdio.h>

int main(int argc, char **argv)
{
	int A_score, B_score;
	int tmp;
	A_score = B_score = 0;
	
	for (int i = 3; i > 0; i--)
	{
		scanf("%d", &tmp);
		A_score += i*tmp;

	}
	for (int i = 3; i > 0; i--)
	{
		scanf("%d", &tmp);
		B_score += i*tmp;

	}

	if (A_score == B_score)
	{
		printf("T\n");
	}
	else 
	{
		printf("%c\n", A_score > B_score ? 'A' : 'B');
	}
	
	return 0;
}
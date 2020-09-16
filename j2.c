#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int P, N, R;
	// P is the amount of people 
	scanf("%d", &P);
	// N is the amount of people who have the disease on day 0
	scanf("%d", &N);
	// R is the amount of people a single person infects on the next day
	scanf("%d", &R);

	int i, infected = 0;
	for (i = 0; infected <= P; i++)
	{
		infected += N*pow(R, i);
		//printf("day %d infected %d\n", i, infected);
	}
	printf("%d", --i);
}
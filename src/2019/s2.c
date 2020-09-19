#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void averagePrimes(int n, int *a, int *b);
int isPrime(int n);

int main(int argc, char **argv)
{
	int lines;
	scanf("%d", &lines);
	int *numbers;
	numbers = (int *)malloc(lines*sizeof(int));
	
	for (int i = 0; i < lines; i++)
	{
		scanf("%d", &numbers[i]);
	}

	int prime1, prime2;
	for (int i = 0; i < lines; i++)
	{
		averagePrimes(numbers[i], &prime1, &prime2);
		printf("%d %d\n", prime1, prime2);
	}
}

void averagePrimes(int number, int *low, int *high)
{
	for (int i = 0; i <= number; i++)
	{
		if (isPrime(number-i) && isPrime(number+i))
		{
			*low = number-i;
			*high = number+i;
			break;
		}
	}
}

int isPrime(int n)
{
	int i;
	bool prime = true;
	for (i=2; i<=sqrt(n); i++)
	{
		if (n%i==0)
		{
			prime = false;
			break;
		}
	}
	if (n<3)
		return false;
	else 
		return prime;
}
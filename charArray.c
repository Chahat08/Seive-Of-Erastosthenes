// The Seive of Erastosthenes method of finding primes below N
// Using a character array

#include <stdio.h>
#include <stdlib.h>
#define N 10000

int main()
{
	int i, j;
	int a[N];

	for (i = 2; i < N; ++i) a[i] = '1';

	for (i = 2; i < N; ++i)
	{
		if(a[i]=='1')
			for (j = i; j <= N / i; ++j)
				if (a[i * j]=='1') a[i * j] = '0';
	}

	for (i = 2; i < N; ++i)
		if (a[i]=='1') printf("%4d\n", i);

	return 0;
}

// The Seive of Erastosthenes method of finding primes below N
// Using a bit array

#include <stdio.h>
#include <stdlib.h>
#define SetBit(a, k) ((a[k/32]) |= (1 << (k%32)))
#define ClearBit(a, k)  ((a[k/32] &= ~(1 << k%32)))
#define TestBit(a, k) ((a[k/32] & (1 << (k%32))))
#define N 10000

int main()
{
	int i, j, n = N / 32, a[n];

	for (i = 2; i < n; ++i) SetBit(a, i);

	for (i = 2; i < n; ++i)
	{
		if (TestBit(a, i))
			for (j = i; j <= n / i; ++j)
				if (TestBit(a, i * j)) ClearBit(a, i * j);
	}

	for (i = 2; i < n; ++i)
		if (TestBit(a, i)) printf("%4d\n", i);

	return 0;
}

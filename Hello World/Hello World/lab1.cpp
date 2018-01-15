#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	for (int x = (a < b)?a:b ; x >= 1 ; x--)
		if ((a%x) == 0 && (b%x == 0))
			return x;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).

	if (n <= 2)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}

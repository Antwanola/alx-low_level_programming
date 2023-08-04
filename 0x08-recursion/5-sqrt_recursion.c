#include "main.h"




int srt_helperFunc(int n, int s, int e)
{
	int sqr, middle;
	if (s > e)
		return (-1);
	middle = (s + e) / 2;

	sqr = middle * middle;
	if (sqr == n)
		return (middle);
	if (sqr < n)
	{
		return (srt_helperFunc(n, middle + 1, e));
	}
	else
	return (srt_helperFunc(n, s, middle - 1));

}

int _sqrt_recursion(int n)
{
	if (n < 0 )
		return (-1);

	return srt_helperFunc(n, 0, n);
}

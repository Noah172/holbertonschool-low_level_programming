int sqrt2(int n, int x);
/**
 * _sqrt_recursion - find the natural square root of a given number
 * @n: number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt2(n, 0));
}
/**
 * sqrt2 - find the sqrt of a given number
 * that its pow of 2 is equal to the given number
 * @n: The given number
 * @x: the x number
 * Return: -1 if there is no natural number of n or the x that
 * power times 2 is equal to n
 */
int sqrt2(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (sqrt2(n, x + 1));
}

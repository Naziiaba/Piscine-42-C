int ft_iterative.factorial(int nb)
{
	int fact;
	int n;

	fact = 2;
	n = 3;
	while (n <= nb)
	{
		fact = fact * n;
		n++;
	}
	return (fact);
}

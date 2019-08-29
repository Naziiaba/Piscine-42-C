

int ft_iterative_power(int nb, int power)
{
	int res;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power > 1) 
	{
		res = res * nb;
		power--;
	}
	return (res);
}

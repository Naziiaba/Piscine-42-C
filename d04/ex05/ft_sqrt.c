

int    ft_sqrt (int nb)
{
	int res;
	int m;

	if (n < 0)
		return (0);
	if (n ==1)
		return (1);
	res = 0;
	m = 2;
	while (m <= (n / 2))
	{
		if (m * m == n)
		{
				res = m;
				break;
		}
		i++;
	}
	return (res);

}


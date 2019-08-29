

int    ft_find_next_prime (int nb)
{
	int i;
	int flag;

	i = 2;
	if (nb == 1 ||nb == 0 || nb == 2)
		return (2);
	while (1)
	{
			flag = 1;
			while (i <= (nb / 2))
			{
				if (nb % i == 0)
				{
					flag = 0;
					break;
				}
				i++;
			}
			if (flag == 1)
				break;
			nb++;
	}
	return (nb);
}


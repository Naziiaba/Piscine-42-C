
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return();
	if (power == 0)
		return(1);
	if (power < 2)
		return(nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

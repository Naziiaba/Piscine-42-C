#include <unistd.h>
void  ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void  ft_is_negative(int n)
{
	char ch;

	if(n > 0)
		ch='P';
	else
		ch='N';
	ft_putchar(ch);
}

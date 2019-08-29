#include  <unistd.h>

void ft_putchar(char ch) 
{
	write(1, &ch, 1);
}
void  ft_print_comb2(void)
{
		char ch1; 
		char ch2; 
		char ch3;

		ch1 = '0';
	while(ch1 <='7')
	{
		ch2 = ch1 + 1;
		while(ch2 <= '8')
		{
			ch3 = ch2 + 1;
			while(ch3 <= '9')
			{
				if(!(ch1 == '0' && ch2 == '1' && ch3 == '2'))
					ft_putchar(',');
				ft_putchar(ch1);
				ft_putchar(ch2);
				ft_putchar(ch3);
				ch3++;
			}
			ch2++;
		}
		ch1++;
	}
}
					



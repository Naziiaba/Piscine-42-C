#include <unistd.h>

void ft_putchar(char ch1, char ch2, char ch3, char ch4)

{
	if(!(ch1 == '0' && ch2 == '0' && ch3 =='0' && ch4 =='1'))
		write(1, ",", 1);
	write(1, &ch1, 1);
	write(1, &ch2, 1);
	write(1, " ", 1);
	write(1, &ch3, 1);
	write(1, &ch4, 1);
}

void print (char ch1, char ch2, char ch3, char ch4)
	while (ch1 <= '9')
	{
		ch2 = '0';
	   while (ch2 <= '9')
	   {
			ch3 = ch2 =='9' ? ch1 + 1 : ch1;
 			if(ch2 != '9')
				ch4 = ch2 + 1;
				while (ch3 <= '9')
				{
					if (ch3 > ch1 && ch2 == '9')
					ch4 = '0';
					while (ch4 <= '9')	
					{
						ft_putchar(ch1, ch2, ch3, ch4);
						ch4++;
					}
					ch3++;
				}
				ch2++;
			}
	   		ch1++;
		}
	}

void ft_print_comb2(viod)
{
	char ch1;
	char ch2;
	char ch3;
	char ch4;
	
	ch1 = '0';
	print(ch1, ch2, ch3, ch4);

}
		
	


#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>



void ft_putchar(char c, int *count)
{
	*count += 1;
	write(1, &c, 1);
}
void ft_putstr(char *s, int *count)
{
	int i = 0;
	if(!s)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		while(s[i])
			ft_putchar(s[i++], count);
	}
}
void ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
	}
	else
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			*count += 1;
			write(1, "-", 1);
		}
		if ( nbr > 9)
		{
			ft_putnbr(nbr / 10, count);
			ft_putnbr(nbr % 10, count);
		}
		else
			ft_putchar(nbr + 48 , count);
	}
}
void ft_puthex(unsigned int x, int *count)
{
	char *str = "0123456789abcdef";

	if (x > 15)
	{
		ft_puthex(x / 16, count);
		ft_puthex(x % 16, count);
	}
	else
		ft_putchar(str[x], count);
}
int ft_printf(const char *format, ... )
{
	int count = 0;
	va_list args;
	va_start(args, format);
	while(*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%', &count);
			else if (*format == 'd')
			{
				int d = va_arg(args, int);
				ft_putnbr(d, &count);
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);
				ft_putstr(s, &count);
			}
			else if( *format == 'x')
			{
				unsigned int x = va_arg(args, unsigned int);
				ft_puthex(x, &count);
			}
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
// int main()
// {
// 	int i = ft_printf("here %d   %s   %x\n",  -2147483649, "the workd is good", -9001);
// 	int k = printf("here %d   %s   %x\n",  -2147483649, "the workd is good", -9001);
// 	printf("ft_printf: %d\nprintf:%d\n", i, k);
// 	return (0);
// }
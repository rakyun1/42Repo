#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	char	*temp;
	int		str_idx;

//	check_exception(str);

	str_idx = 0;
	va_start(ap, str);
	while (str[str_idx] != '\0')
	{
		if (str[str_idx] == '%')
		{
			str_idx++;
			if (str[str_idx] == 'd' || str[str_idx] == 'i')
				ft_putnbr_fd((long)va_arg(ap, int), 1);
			if (str[str_idx] == 's')
			{
				temp = va_arg(ap, char *);
				write(STDOUT, temp, ft_strlen(temp));
			}
			if (str[str_idx] == 'c')
				write(STDOUT, (char[]){(char)va_arg(ap, int)}, 1);
			if (str[str_idx] == 'u')
				ft_putnbr_fd((long)va_arg(ap, unsigned int), 1);
			if (str[str_idx] == 'x')
				print_in_lowercase_hexadecimal((unsigned int)va_arg(ap, int));
			if (str[str_idx] == 'X')
				print_in_uppercase_hexadecimal((unsigned int)va_arg(ap, int));
			if (str[str_idx] == '%')
				write(1, "%", 1);
			if (str[str_idx] == 'p')
				print_address_hexadecimal((unsigned long)va_arg(ap, void *));
			str_idx++;
		}
		else
		{
			write(STDOUT, &str[str_idx], 1);
			str_idx++;
		}
	}
	return (str_idx - 1);
}

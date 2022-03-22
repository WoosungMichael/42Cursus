#include "ft_printf.h"

int	ft_check(char format)
{
	char	*types;
	int		i;

	types = "cspdiuxX%";
	index = 0;
	while (types[index])
	{
		if (format == types[index])
			return (1);
		index++;
	}
	return (0);
}

int	ft_check_type(char format, va_list *args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(*args, int));
	if (format == 's')
		len += ft_putstr(va_arg(*args, char *));
	if (format == 'p')
		len += ft_pointer(va_arg(*args, void *));
	if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(*args, long long));
	if (format == 'u')
		len += ft_unsigned(va_arg(*args, long long));
	if (format == 'x')
		len += ft_hexadecimal(va_arg(*args, int));
	if (format == 'X')
		len += ft_hexadecimal_2(va_arg(*args, int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		len;

	index = 0;
	len = 0;
	va_start(args, format);
	while (format[index])
	{
		if (format[index] == '%' && ft_check(format[index + 1]))
		{
			if (format[index + 1] == '%')
				len += ft_putchar('%');
			else
				len += ft_check_type(format[index + 1], &args);
			index++;
		}
		else
			len += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (len);
}
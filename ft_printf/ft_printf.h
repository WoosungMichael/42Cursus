#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(long long n);
int	ft_hexadecimal(unsigned int nbr);
int	ft_hexadecimal_2(unsigned int nbr);
int	ft_unsigned(long long nbr);
int	ft_pointer(void *ptr);
int	ft_pointerhexadecimal(unsigned long nbr);
#endif
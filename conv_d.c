#include "printf.h"

int		conv_d(va_list *ap)
{
	long int	d;
	char		*str;

	d = va_arg(*ap, long int);
	str = ft_itoa(d);
	ft_putstr(str);
	return (ft_strlen(str));
}

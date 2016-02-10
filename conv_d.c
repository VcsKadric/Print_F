#include "printf.h"

int		conv_d(va_list ap)
{
	long int	d;
	char		*str;

	d = va_arg(ap, long long int);
	str = uitoa_base(d, 10);
	ft_putstr(str);
	return (ft_strlen(str));
}

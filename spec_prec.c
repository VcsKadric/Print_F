#include "printf.h"

int	spec_prec(t_flag *flg, va_list *ap)
{
 int	var;

 var = va_arg(*ap, int);
  if (flg->prec && var == 0)
    return (0);
  return (0);
}

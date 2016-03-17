#include "printf.h"

static int	conv_hex(int nb)
{
  if (nb <= 9)
    return (nb + '0');
  return (nb - 10 + 'a');
}

char		*itoa_hex(t_ulli value)
{
  char	*str;
  int	n;
  t_ulli	nb;

  nb = value;
  n = 0;
  while (nb >= 16)
    {
      nb = nb / 16;
      n++;
    }
  str = (char *)malloc((n + 1) * sizeof(str));
  if (str)
    {
      str[n + 1] = '\0';
      while (n >= 0)
	{
	  nb = value % 16;
	  str[n] = conv_hex(nb);
	  value = value / 16;
	  n--;
	}
    }
  return (str);
}

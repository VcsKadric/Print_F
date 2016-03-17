#include "printf.h"

char *itoa_oct(t_ulli value)
{
  char		*str;
  int		n;
  t_ulli	nb;

  nb = value;
  n = 0;
  while (nb > 7)
    {
      nb= nb / 8;
      n++;
    }
  str = (char *)malloc((n + 1) * sizeof(str));
  if (str)
    {
      str[n + 1] = '\0';
      while (n >= 0)
	{
	  nb = value % 8;
	  str[n] = nb + '0';
	  value = value / 8;
	  n--;
	}
    }
  return (str);
}

#include "printf.h"

	int	ft_put_wide3(char str[4], wint_t c)
{
	str[0] = (((c & 0x1c0000) >> 18) + 0xF0);
	str[1] = (((c & 0x03F000) >> 12) + 0x80);
	str[2] = (((c & 0x0Fc0) >> 6) + 0x80);
	str[3] = ((c & 0x003F) + 0x80);
	ft_putwchar(str, 4);
	return (4);
}

	int	ft_put_wide2(char str[4], wint_t c)
{
	str[0] = (((c & 0xF000) >> 12) + 0xE0);
	str[1] = (((c & 0x0Fc0) >> 6) + 0x80);
	str[2] = ((c & 0x003F) + 0x80);
	ft_putwchar(str, 3);
	return (3);
}

	int	ft_put_wide1(char str[4], wint_t c)
{
	str[0] = (((c & 0x07c0) >> 6) + 0xc0);
	str[1] = ((c & 0x003F) + 0x80);
	ft_putwchar(str, 2);
	return (2);
}

int	ft_put_wide(wint_t c)
{
  	char	str[4];
	int		ret;

	ret = 1;
	if (c <= 0x7F)
		ft_putwchar(&c, 1);
	else	if (c <= 0x7FF)
		ret = ft_put_wide1(str, c);
	else	if (c <= 0xFFFF)
		ret = ft_put_wide2(str, c);
	else	if (c <= 0x10FFFF)
		ret = ft_put_wide3(str, c);
	return (ret);
}

void	ft_putwchar(void *ptr, int size)
{
  char	*str;
  int	i;

  str = ptr;
  i = 0;
  while(i < size)
    {
      write(1, &str[i], 1);
      i++;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 08:12:02 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/01 16:40:09 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		print_prec(t_flag *flg, int nb)
{
	int		i;
	int ret;

	i = nb;
	ret = 0;
	if (flg->isneg)
		i--;
	while (i < flg->prec_nb) 
	{
		ft_putchar('0');
		i++;
		ret++;
	}
	return (ret);
}


char	*uitoa(t_ulli value)
{
	char		*str;
	int		n;
	t_ulli		nb;

	nb = value;
	n = 0;
	while (nb >= 10)
	{
		nb /= 10;
		n++;
	}
	str = (char *)malloc(sizeof(str) * (n + 1));
	if (str)
	{
		str[n + 1] = '\0';
		while (n >= 0)
		{
			nb = value % 10;
			str[n] = '0' + nb;
			value = value / 10;
			n--;
		}
	}
	return (str);
}

size_t	ft_wstrlen(wchar_t *str)
{
  wchar_t *tmp;

  tmp = str;
  while(*tmp != L'\0')
    tmp++;
  return(tmp - str);
}

int		ft_nb_count(long int n, int i)
{
	while (n > 9 || n < 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(long int n)
{
	char		*nbstr;
	char		*nbcut;
	int			nblen;
	long int	nb;
	int			i;

	nblen = (n < 0) ? 2 : 1;
	nb = n;
	i = ft_nb_count(n, nblen);
	nbcut = ft_strnew(i + 1);
	while (i > 0)
	{
		if (n >= 0)
			nbcut[i - 1] = ((char)((nb % 10) + 48));
		if (n < 0 && i >= 2)
			nbcut[i - 2] = ((char)(48 - (nb % 10)));
		i--;
		nb /= 10;
	}
	if (n < 0)
	  nbcut[i] = '-';
	nbstr = ft_strnew(ft_nb_count(n, nblen) + 1);
	ft_strcpy(nbstr, nbcut);
	free(nbcut);
	return (nbstr);
}



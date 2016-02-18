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

int		conv_hex(t_ulli nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

char	*uitoa_base(t_ulli value, t_ulli base)
{
	int					i;
	char				*str;
	t_ulli				tmp;
	
	i = 0;
	tmp = value;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}	
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0)
	{
		tmp = value % base;
		str[i] = conv_hex(tmp);
		value /= base;
		i--;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 04:21:42 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/01 18:14:58 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		define_i(t_flag *flg, int nb)
{
	int i;

	i = 0;
	if (flg->prec && nb > flg->prec_nb)
		i = nb;
	else    if (flg->prec && (flg->nbr <= flg->prec_nb))
		i = flg->nbr;
	else    if (flg->prec && (flg->nbr > flg->prec_nb))
		i = flg->prec_nb;
	else    if (!flg->prec)
		i = nb;
	if (flg->prec && flg->isneg && nb < flg->prec_nb)
		i++;
	if (flg->space)
		i++;
	return (i);
}

int		ret_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		put_nchar(t_flag *flg, int n)
{
	int		i;
	int		ret;

	i = define_i(flg, n);
	ret = 0;
	if (flg->zero && flg->isneg)
		ft_putchar('-');
	if (flg->zero && flg->plus)
	{
		ft_putchar('+');
		i++;
		ret++;
	}
	while (i < flg->nbr)
	{
		if(flg->zero && !flg->prec)
			ft_putchar('0');
		else
			ft_putchar(' ');
		i++;
		ret++;
	}
	return (ret);
}

int		put_nstr(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int		check_char(char *str, const char *tab, int i)
{
	int index;

	index = 0;
	while (tab[index])
	{
		if (str[i] == tab[index])
			return (1);
		index++;
	}
	return (0);
}

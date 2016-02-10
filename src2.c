/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 23:59:02 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 16:26:02 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		nbr_len(int nb)
{
	int		i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb)
	{
		i++;
		nb/= 10;
	}
	return (i);
}

int		long_nbr_len(long long int nb)
{
	int		i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb)
	{
		i++;
		nb/= 10;
	}
	return (i);
}

void		put_long_nb(long long nb)
{
	if (nb == -9223372036854775807 - 1)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while(nb >= 10)
		put_long_nb(nb / 10);
	ft_putchar(nb % 10 + '0');
}

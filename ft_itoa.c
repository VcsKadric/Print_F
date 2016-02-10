/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:57:48 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 14:28:35 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_lennbr(int nb)
{
	int	nblen;

	if (nb == 0)
		return (1);
	nblen = 0;
	while (nb != 0)
	{
		nblen++;
		nb = nb / 10;
	}
	return (nblen);
}

static int	ft_negpos(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_signint(int cp)
{
	if (cp < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	int		nblen;
	int		sign;
	char	*res;

	sign = ft_signint(n);
	nblen = ft_lennbr(n);
	res = NULL;
	res = (char *)malloc(sizeof(char) * (nblen + sign + 1));
	if (res)
	{
		res = res + nblen + sign;
		*res = '\0';
		if (!n)
			*--res = '0';
		while (n != 0)
		{
			*--res = ft_negpos(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--res = '-';
		return (res);
	}
	return (NULL);
}

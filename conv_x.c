/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 09:54:02 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 09:54:46 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	upper_x(t_flag *flg, int nb, int tmp, int ret)
{
	if (flg->diese && nb)
		return (tmp + ret + 2);
	if (flg->diese && !nb)
		return (1);
	return (tmp + ret);
}

int			conv_x(va_list *ap, t_flag *flg)
{
	char		*str;
	int		nb;
	int		ret;
	int		tmp;

	tmp = 0;
	ret = 0;
	nb = va_arg(*ap, int);
	str = itoa_base(nb, 16);
	while (str[tmp])
	{
		str[tmp] = ft_toupper(str[tmp]);
		tmp++;
	}
	tmp = ft_strlen(str);
	if (flg->diese && nb != 0)
		ft_putstr("0X");
	if (flg->nbr)
		ret += put_nchar(flg, tmp);
	if (flg->prec && tmp < flg->prec_nb)
		ret += print_prec(flg, tmp);
	ft_putstr(str);
	return (upper_x(flg, nb, tmp, ret));
}

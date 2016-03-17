/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 09:53:22 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/01 16:37:03 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			convert_x(va_list *ap, t_flag *flg)
{
	char				*str;
	t_ulli				nb;
	int					ret;
	int					tmp;

	ret = 0;
	nb = va_arg(*ap, t_ulli);
	if (flg->hh)
	  nb = (unsigned char)nb;
	str = itoa_hex(nb);
	tmp = ft_strlen(str);
	if (flg->diese == 1 && nb != 0)
		ft_putstr("0x");
	if (flg->nbr)
		ret += put_nchar(flg, tmp);
	if (flg->prec && tmp < flg->prec_nb)
		ret += print_prec(flg, tmp);
	ft_putstr(str);
	if (flg->diese && nb == 0)
		return (1);
	if (flg->diese && nb)
		return (tmp + ret + 2);
	return (tmp + ret);
}

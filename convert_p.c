/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 08:24:45 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 08:24:48 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		convert_p(va_list *ap, t_flag *flg)
{
	char			*str;
	unsigned long		nb;
	int				ret;

	nb = va_arg(*ap, unsigned long);
	str = itoa_hex(nb);
	if (flg->nbr_len && !flg->less)
		ret = put_nchar(flg, (ft_strlen(str) + 2));
	ft_putstr("0x");
	ft_putstr(str);
	if (flg->nbr_len && flg->less)
		ret = put_nchar(flg, (ft_strlen(str) + 2));
	if (flg->nbr_len)
		return (ft_strlen(str) + 2 + ret);
	return (ft_strlen(str) + 2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 09:51:22 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 09:52:01 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			convert_u(va_list *ap, t_flag *flg)
{
	char				*str;
	t_ulli	nb;
	int					tmp;
	int					ret;

	ret = 0;
	nb = va_arg(*ap, unsigned long int);
	if (flg->hh) // test
	  nb = (unsigned char)nb;// test
	str = uitoa(nb);
	tmp = ft_strlen(str);
	if (flg->nbr)
		ret += put_nchar(flg, tmp);
	if (flg->prec && tmp < flg->prec_nb)
		ret += print_prec(flg, tmp);
	ft_putstr(str);
	return (ret + tmp);
}

int			conv_u(va_list *ap, t_flag *flg)
{
	char				*str;
	t_ulli	nb;
	int					tmp;
	int					ret;

	ret = 0;
	nb = va_arg(*ap, unsigned long int);
	str = uitoa(nb);
	tmp = ft_strlen(str);
	if (flg->nbr)
		ret += put_nchar(flg, tmp);
	if (flg->prec && tmp < flg->prec_nb)
		ret += print_prec(flg, tmp);
	ft_putstr(str);
	return (ret + tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 09:52:25 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/01 16:36:54 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			convert_o(va_list *ap, t_flag *flg)
{
	char			*str;
	//	long long int	nb;
	int	nb;
	int				tmp;
	int				ret;

	ret = 0;
	nb = va_arg(*ap,/*long long int*/ int);
	str = uitoa_base(nb, 8);
	if (flg->diese && nb != 0)
		ft_putchar('0');
	tmp = ft_strlen(str);
	if (flg->nbr)
		ret += put_nchar(flg, tmp);
	if (flg->prec && tmp < flg->prec_nb)
		ret += print_prec(flg, tmp);
	ft_putstr(str);
	if (flg->diese && nb != 0)
		return (ft_strlen(str) + 1);
	return (ret + tmp);
}

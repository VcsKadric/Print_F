/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 00:56:00 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/10 08:46:51 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		type_arg(char *str, int i, va_list *ap, t_flag *flg)
{
	if (str[i] == 'd' || str[i] == 'i')
		return (convert_di(ap, flg));
	else	if (str[i] == 's')
		return (convert_s(ap, flg));
	else	if (str[i] == 'c' || str[i] == 'C')
		return (convert_c(ap, flg));
	else	if (str[i] == 'p')
		return (convert_p(ap, flg));
	else	if (str[i] == 'x')
		return (convert_x(ap, flg));
	else	if (str[i] == 'o' || str[i] == 'O')
		return (convert_o(ap, flg));
	else	if (str[i] == 'u' || str[i] == 'U')
		return (convert_u(ap, flg));
	else	if (str[i] == 'D' || (str[i] == 'd' && (flg->l || flg->ll)))
		return (conv_d(ap));
	else	if (str[i] == 'X')
		return (conv_x(ap, flg));
	else	if (str[i] == 'S')
		return (conv_s(ap));
	//	else	if (str[i] == 'U')
	//		return (conv_u(ap, flg));
	//	else	if (str[i] == 'O')
	//  return (conv_o(ap, flg));
	else	if (str[i] == '%')
	{
		ft_putchar(str[i]);
		return(1);
	}
	else	if (str[i])
	{
		ft_putchar(str[i]);
		return (1);
	}
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 08:14:12 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 08:20:01 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		convert_s(va_list *ap, t_flag *flg)
{
	char	*str;
	int		ret;

	ret = 0;
	str = va_arg(*ap, char *);
	if (str == NULL || !str)
	{
		ft_putstr("(null)");
		return (ft_strlen("(null)"));
	}
	if (flg->nbr && !flg->less)
		ret += put_nchar(flg, ft_strlen(str));
	if (flg->prec && flg->prec_nb) 
	    return(ret + put_nstr(str, flg->prec_nb));
	ft_putstr(str);
	if (flg->space)
		return (ft_strlen(str));
	if (flg->nbr)
		return (ft_strlen(str) + ret);
	return (ft_strlen(str));
}

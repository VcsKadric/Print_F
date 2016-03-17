/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 08:15:38 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 08:20:00 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int		convert_c(va_list *ap, t_flag *flg)
{
	char	c;

	c = va_arg(*ap, int);
	if (flg->isneg)
	  return (1);
	ft_putchar(c);
	return (1);
}

int		conv_c(va_list *ap, t_flag *flg)
{
	wchar_t	c;
	int		ret;

	ret = 0;
	c = (wchar_t)va_arg(*ap, wint_t);
	ret += ft_put_wide(c);
	if (flg->plus && c == '\0')
		return (ret);
	return (ret);
}

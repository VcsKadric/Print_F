/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 08:56:16 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/10 09:08:42 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		conv_s(va_list *ap)
{
	wchar_t *str;
	int		ret;
	size_t	i;

	i = 0;
	ret = 0;
	str = va_arg(*ap, wchar_t *);
	if (!str)
	{
		ft_putstr("(null)");
		return (ft_strlen("(null)"));
	}
	while(i < ft_wstrlen(str))
	  {
	    ret = ret + ft_put_wide(str[i]);
	    i++;
	  }
	return (ret);
}

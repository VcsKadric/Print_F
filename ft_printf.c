
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 09:41:10 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/10 08:45:40 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_flag			*init_struct(char *str, int i)
{
	t_flag	*flg;

	flg = (t_flag*)malloc(sizeof(t_flag));
	if (!(flg))
		return (NULL);
	flg->flag = 0;
	flg->nbr = 0;
	flg->nbr_len = 0;
	flg->nbr2 = 0;
	flg->prec_nb = 0;
	flg->diese = 0;
	flg->space = 0;
	flg->l = 0;
	flg->ll = 0;
	flg->zero = 0;
	flg->plus = 0;
	flg->less = 0;
	flg->h = 0;
	flg->hh = 0;
	flg->j = 0;
	flg->z = 0;
	flg->prec = 0;
	flg = check_flag(flg, str, i);
	return (flg);
}

int		adapt_flag(t_flag *flg, int i)
{
	flg->flag = flg->h + flg->hh + flg->j + flg->z + flg->l +		\
		flg->ll + flg->diese + flg->less + flg->plus + flg->zero +	\
	  flg->space + flg->nbr_len;// + flg->prec; // ajout flg->prec
	if (flg->nbr2)
		flg->flag +=  1 + flg->nbr2;
	if (flg->flag)
		i += flg->flag;
	return (i);
}

int		ft_read_print(char *str, va_list *ap)
{
	int		i;
	int		ret;
	t_flag	*flag;

	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			flag = init_struct(str, i);
			if (str[i] != '%')
				i = adapt_flag(flag, i);
			ret = ret + type_arg(str, &i, ap, flag);
		}
		else
		  ret += 1 + ret_putchar(str[i]);
		i++;
	}
	return (ret);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			ret;
	char		*str;

	ret = 0;
	va_start(ap, format);
	str = ft_strdup(format);
	ret = ft_read_print(str, &ap);
	va_end(ap);
	free(str);
	return (ret);
}

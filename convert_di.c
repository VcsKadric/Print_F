/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 02:35:08 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/10 08:49:26 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_flag		*get_sign(int i, long long int j, t_flag *flg)
{
	if (i != 0)
		if (i < 0)
			flg->isneg = 1;
	if (j != 0)
		if (j < 0)
			flg->isneg = 1;
	return (flg);
}

int			put_sign(int n)
{
	int		ret;

	ret = 0;
	if (n == 0)
		ft_putchar('-');
	if (n == 1)
		ret += ret_putchar('+') + 1;
	return (ret);
}

static void	limit_int(int nb, long long int lnb, t_flag *flg)
{
	if (!lnb && nb < 0)
	{
		if (nb == -2147483648)
			ft_putstr("2147483648");
		else
		{
			nb *= -1;
			if (!flg->less)
				ft_putnbr(nb);
		}
	}
	else if (!nb && lnb < 0)
	{
		if (lnb < -9223372036854775807)
			ft_putstr("9223372036854775808"); // '-' vire
		else
		{
			lnb = -lnb;
			if(!flg->less)
				put_long_nb(lnb);
		}
	}
	else if (!flg->less)
		nb == 0 ? put_long_nb(lnb) : ft_putnbr(nb);

}

int			flag_conv_d(t_flag *flg, int tmp, int nb, long long int lnb)
{
	int		ret;

	ret = 0;
	if (flg->less && !flg->prec)
	{
		if (lnb)
			put_long_nb(lnb);
		else
			ft_putnbr(nb);
	}
	if (flg->space && !flg->plus && !flg->isneg)
		ret += 1 + ret_putchar(' ');
	if (flg->nbr)
		ret += put_nchar(flg, tmp);
	if (!flg->less && !flg->zero)
		if (flg->plus || nb < 0 || lnb < 0)
			ret += (flg->isneg == 1 ? put_sign(0) : put_sign(1));
	if (flg->prec && tmp < flg->prec_nb && (nb || lnb)) // ajout  && nb || lnb modif <= -> <
		ret += print_prec(flg, tmp);
	limit_int(nb, lnb, flg);
	return (ret);
}

int			convert_di(va_list ap, t_flag *flg)
{
	int				ret;
	int				nb;
	long long int	lnb;
	int				tmp;

	ret = 0;
	nb = 0;
	lnb = 0;
	if (flg->l || flg->ll || flg->j || flg->z)
		lnb = va_arg(ap, long long int);
	else
		nb = va_arg(ap, int);

	flg = get_sign(nb, lnb, flg);
	if (nb)
		tmp = nbr_len(nb);
	else
		tmp = long_nbr_len(lnb);
	ret = flag_conv_d(flg, tmp, nb, lnb);
	return (ret + tmp); 
}

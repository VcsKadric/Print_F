/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 23:41:02 by cdebord           #+#    #+#             */
/*   Updated: 2016/02/01 17:19:52 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_flag			*get_precision(t_flag *flg, char *str, int i)
{
	int		tmp;
	tmp = 0;
		if (str[i] == '.') // ajout
		  {
		    flg->prec = 1;
		    return (flg); // ajout 
		  }
	while (!(ft_strchr(CONV, str[i])) && str[i])
	{
	  if (str[i - 1] == '.')
		{
			tmp = i;
			flg->prec = 1;
			break ;
		}
		i++;
	}
	while (ft_strchr(NUM, str[i]) && str[i])
	{
		i++;		
		flg->nbr2++;
	}
	if (flg->nbr2)
		flg->prec_nb = ft_atoi(ft_strsub(str, tmp, i));
	return (flg);
}

t_flag			*check_flag2(t_flag *flg, char *str, int i)
{
	int	tmp;

	tmp = i;
	while (!(ft_strchr(CONV, str[i])) && str[i])
	{
		if (str[i] == 'j')
			flg->j++;
		if (str[i] == 'z')
			flg->z++;
		if (str[i] == 'l' && str[i - 1] != 'l')
			flg->l++;
		if (str[i] == 'l' && str[i - 1] == 'l')
			flg->ll++;
		if (str[i] == 'h' && str[i - 1] != 'h')
			flg->h++;
		if (str[i] == 'h' && str[i - 1] == 'h')
			flg->hh++;
		i++;
	}
	flg = get_precision(flg, str, tmp);
	return (flg);
}

t_flag			*check_number(t_flag *flg, char *str, int i)
{
	int	tmp;
	int	tmpi;

	tmp = 0;
	tmpi = i;
	while (!(ft_strchr(CONV, str[i])) && str[i] != '.' && str[i])
	{
		if (ft_strchr(NUM, str[i]))
		{
			tmp = i;
			break ;
		}
		i++;
	}
	if (flg->zero == 1)
		flg->nbr_len = -1;
	while (ft_strchr(NUM, str[i]) && str[i])
	{
		flg->nbr_len++;
		i++;
	}
	if (flg->nbr_len)
		flg->nbr = ft_atoi(ft_strsub(str, tmp, i));
	flg = check_flag2(flg, str, tmpi);
	return (flg);
}

t_flag			*check_flag(t_flag *flg, char *str, int i)
{
	int		tmp;

	tmp = i;
	while (!ft_strchr(CONV, str[i]) && str[i])
	{
		if (str[i] == '#')
			flg->diese++;
		if (str[i] == '+')
			flg->plus++;
		if (str[i] == '-')
			flg->less++;
		if (str[i] == ' ')
			flg->space++;
		if (str[i] == '0' && !ft_strchr(NUM, str[i - 1]))
			flg->zero++;
		i++;
	}
	flg = (check_number(flg, str, tmp));
	return (flg);
}

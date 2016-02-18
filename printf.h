/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 10:35:31 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 17:16:30 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

//# include "libft/includes/libft.h"
# include <stdarg.h>
#include <unistd.h>
# include <limits.h>
# include <wchar.h>
#include <stdlib.h>
# define CONV "sSpdDioOuUxXcC"
# define NUM "0123456789"

typedef unsigned long long int	t_ulli;

typedef struct	s_flag
{
	int			flag;
	int			nbr;
	int			nbr_len;
	int			nbr2;
	int			prec_nb;
	int			diese;
	int			space;
	int			l;
	int			ll;
	int			zero;
	int			plus;
	int			less;
	int			h;
	int			hh;
	int			j;
	int			z;
	int			prec;
	int			isneg;
}				t_flag;

int				ft_printf(const char *format, ...);
t_flag			*init_struct(char *str, int i);
int				ft_read_print(char *str, va_list *ap);
int				type_arg(char *str, int i, va_list *ap, t_flag *flag);
int				ret_putchar(char c);
int				put_nchar(t_flag *flg, int n);
int				put_nstr(char *str, unsigned int n);
int				long_nbr_len(long long int nb);
int				nbr_len(int nb);
int				define_i(t_flag *flg, int nb);
void			put_long_nb(long long int nb);
int				check_char(char *str, const char *tab, int i);
t_flag			*check_flag(t_flag *flg, char *str, int i);
t_flag			*check_flag2(t_flag *flg, char *str, int i);
t_flag			*check_number(t_flag *flg, char *str, int i);
t_flag			*get_precision(t_flag *flg, char *str, int i);
t_flag			*get_sign(int i, long long int j, t_flag *flg);
int				put_sign(int n);
int				conv_hex(t_ulli nb);
int				flag_conv_d(t_flag *flg, int tmp, int nb, long long int lnb);
char			*uitoa_base(t_ulli n, t_ulli base);
char			*itoa_base(int n, int base);
int				convert_di(va_list *ap, t_flag *flg);
int				convert_s(va_list *ap, t_flag *flg);
int				convert_c(va_list *ap, t_flag *flg);
int				convert_p(va_list *ap, t_flag *flg);
int				convert_u(va_list *ap, t_flag *flg);
int				convert_o(va_list *ap, t_flag *flg);
int				convert_x(va_list *ap, t_flag *flg);
int				conv_x(va_list *ap, t_flag *flg);
int				conv_d(va_list *ap);
int				conv_s(va_list *ap);
int				print_prec(t_flag *flg, int nb);
int				ft_strlen(const char *s);
int				ft_atoi(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_itoa(int n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			ft_putstr(char const *str);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putwchar(void *ptr, int size);
char			*ft_strchr(const char *s, int c);
int				ft_toupper(int c);
int			ft_put_wide(wint_t c);
int			ft_put_wide1(char str[4], wint_t c);
int			ft_put_wide2(char str[4], wint_t c);
int			ft_put_wide3(char str[4], wint_t c);
size_t			ft_wstrlen(wchar_t *str);


#endif

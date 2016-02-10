/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:02:29 by cdebord           #+#    #+#             */
/*   Updated: 2016/01/30 13:34:21 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!(s))
		return (NULL);
	j = 0;
	i = start;
	str = (char *)malloc(len * sizeof(*str) + 1);
	if (str == NULL)
		return (NULL);
	while (len != 0)
	{
		str[j++] = s[i++];
		len--;
	}
	str[j] = '\0';
	return (str);
}

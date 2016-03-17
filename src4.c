# include "printf.h"


char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}	

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if ((new = (char *)malloc(sizeof(char) * size + 1)))
	{
		i = 0;
		while (i < size + 1)
		{
			new[i] = '\0';
			i++;
		}
		return (new);
	}
	return (NULL);
}

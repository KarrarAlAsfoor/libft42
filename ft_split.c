/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:39:30 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/01 10:49:54 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		i = 0;
		while (*str && (*str == c))
			str++;
		i = ft_wordlen(str, c);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

static char	*ft_strdupp(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(sizeof(char) * (j + 1));
	if (!dst)
		return (NULL);
	while (src[i] && i < j)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**ft_make_split(char const *s, char c, char **dest, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		j = ft_wordlen((char *)s, c);
		dest[i] = ft_strdupp((char *)s, j);
		if (!dest[i])
		{
			while (i > 0)
			{
				free(dest[i - 1]);
				i--;
			}
			free(dest);
			return (NULL);
		}
		s += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		size;

	if (!s)
		return (NULL);
	size = ft_wordcount((char *)s, c);
	dest = malloc(sizeof(char *) * (size + 1));
	if (!dest)
		return (NULL);
	dest = ft_make_split(s, c, dest, size);
	return (dest);
}

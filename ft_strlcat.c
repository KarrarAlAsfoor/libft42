/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:14:45 by Karrar            #+#    #+#             */
/*   Updated: 2022/12/26 18:17:43 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*csrc;
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	res;

	csrc = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	res = 0;
	if (size > len_dst)
		res = len_dst + len_src;
	else
		res = size + len_src;
	i = 0;
	while (csrc[i] != '\0' && (len_dst + 1) < size)
	{
		dst[len_dst] = csrc[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}

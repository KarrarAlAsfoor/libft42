/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:43:45 by Karrar            #+#    #+#             */
/*   Updated: 2022/12/23 16:47:07 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *)s;
	while (n--)
	{
		if (*cs == (unsigned char)c)
			return (cs);
		cs++;
	}
	return (NULL);
}

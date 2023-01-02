/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 20:03:44 by Karrar            #+#    #+#             */
/*   Updated: 2022/12/30 01:34:11 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}

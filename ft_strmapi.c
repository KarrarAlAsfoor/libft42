/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:27:24 by Karrar            #+#    #+#             */
/*   Updated: 2022/12/18 20:15:33 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	mem = (char *)malloc(sizeof(char) * (i + 1));
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

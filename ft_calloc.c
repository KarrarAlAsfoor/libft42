/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:50:13 by Karrar            #+#    #+#             */
/*   Updated: 2023/01/02 21:09:12 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *buffer;
    int        area;

    area = nmemb * size;
    buffer = malloc(area);
    if (!buffer)
        return (NULL);
    while (--area >= 0)
        *(buffer + area) = '\0';
    return ((void *)buffer);
}

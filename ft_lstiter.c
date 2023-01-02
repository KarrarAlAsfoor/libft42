/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 04:54:19 by Karrar            #+#    #+#             */
/*   Updated: 2022/12/31 06:10:29 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!f || !lst)
		return ;
	curr = lst;
	while (curr != NULL)
	{
		next = curr->next;
		f(curr->content);
		curr = next;
	}
}

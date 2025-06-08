/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 22:52:34 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/30 22:52:36 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int num)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		exit(EXIT_FAILURE);
	new->num = num;
	new->range = -1;
	new->next = NULL;
	return (new);
}

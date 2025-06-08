/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:00:39 by josgarci          #+#    #+#             */
/*   Updated: 2022/01/01 00:12:40 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Esta función asigna a cada número la posición que va a tener desde 1 hasta n.
 */

static int	ft_lstmin_partial(t_list *lst);

void	ft_range(t_list *lst)
{
	int		min_partial;
	int		len;
	int		order;
	t_list	*aux;

	len = ft_lstsize(lst);
	order = 1;
	while (order <= len)
	{
		aux = lst;
		min_partial = ft_lstmin_partial(lst);
		while (aux)
		{
			if (aux->num == min_partial)
			{
				aux->range = order;
			}
			aux = aux->next;
		}
		order++;
	}
}

static int	ft_lstmin_partial(t_list *lst)
{
	int		min;
	t_list	*aux;

	aux = lst;
	while (aux && aux->range != -1)
	{
		aux = aux->next;
	}
	min = aux->num;
	while (aux->next)
	{
		if (aux->next->num < min && aux->next->range == -1)
			min = aux->next->num;
		aux = aux->next;
	}
	return (min);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:59:44 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:46:58 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Esta colección de funciones busca los valores máximos y mínimos,
 * también busca el índice de  esos valores máximos y mínimos.
 */

int	ft_lstmax_value(t_list *lst)
{
	int		max;
	t_list	*aux;

	max = lst->num;
	aux = lst;
	while (aux->next)
	{
		if (aux->next->num > max)
		{
			max = aux->next->num;
		}
		aux = aux->next;
	}
	return (max);
}

int	ft_lstmin_value(t_list *lst)
{
	int		min;
	t_list	*aux;

	min = lst->num;
	aux = lst;
	while (aux->next)
	{
		if (aux->next->num < min)
		{
			min = aux->next->num;
		}
		aux = aux->next;
	}
	return (min);
}

int	ft_lstgetmax_index(t_list *lst)
{
	int		max_value;
	int		index;
	t_list	*aux;

	index = -1;
	if (!lst)
		return (index);
	max_value = ft_lstmax_value(lst);
	aux = lst;
	while (aux->next)
	{
		index++;
		if (aux->num == max_value)
			return (index);
		aux = aux->next;
	}
	return (index);
}

int	ft_lstgetmin_index(t_list *lst)
{
	int		min_value;
	int		index;
	t_list	*aux;

	index = -1;
	if (!lst)
		return (index);
	min_value = ft_lstmin_value(lst);
	aux = lst;
	while (aux->next)
	{
		index++;
		if (aux->num == min_value)
			return (index);
		aux = aux->next;
	}
	return (index);
}

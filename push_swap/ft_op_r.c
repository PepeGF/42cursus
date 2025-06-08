/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 23:10:11 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:14:22 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Las funciones de tipo "r" pone el primer elemento de la lista en la última
 * posición. El segundo pasa a ser el primero.
 */

void	ft_ra(t_list **lst)
{
	t_list	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next;
		ft_lstlast(*lst)->next = *lst;
		(*lst)->next = NULL;
		*lst = aux;
		write(1, "ra\n", 3);
	}
}

void	ft_rb(t_list **lst)
{
	t_list	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next;
		ft_lstlast(*lst)->next = *lst;
		(*lst)->next = NULL;
		*lst = aux;
		write(1, "rb\n", 3);
	}
}

void	ft_rr(t_list **lst_a, t_list **lst_b)
{
	t_list	*aux;
	int		control;

	control = 0;
	if (ft_lstsize(*lst_a) > 1)
	{
		aux = (*lst_a)->next;
		ft_lstlast(*lst_a)->next = *lst_a;
		(*lst_a)->next = NULL;
		*lst_a = aux;
		control = 1;
	}
	if (ft_lstsize(*lst_b) > 1)
	{
		aux = (*lst_b)->next;
		ft_lstlast(*lst_b)->next = *lst_b;
		(*lst_b)->next = NULL;
		*lst_b = aux;
		control = 1;
	}
	if (control)
	{
		write(1, "rr\n", 3);
	}
}

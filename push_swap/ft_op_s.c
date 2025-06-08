/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:28:48 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/20 16:05:12 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 *	Intercambia las posiciones 1 y 2 de la lista en 4 pasos:
 * 1)Apunta un auxiliar al tercer nodo.
 * 2)Apunta el next del segundo al primero
 * 3)Apunta el puntero al primero al que era el segundo
 * 4)Apunta el next del nuevo segundo al auxilar (el tercero)
 */

void	ft_sa(t_list **lst)
{
	t_list	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next->next;
		(*lst)->next->next = *lst;
		(*lst) = (*lst)->next;
		(*lst)->next->next = aux;
		write(1, "sa\n", 3);
	}
}

void	ft_sb(t_list **lst)
{
	t_list	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next->next;
		(*lst)->next->next = *lst;
		(*lst) = (*lst)->next;
		(*lst)->next->next = aux;
		write(1, "sa\n", 3);
	}
}

void	ft_ss(t_list **lst_a, t_list **lst_b)
{
	ft_sa(lst_a);
	ft_sb(lst_b);
}

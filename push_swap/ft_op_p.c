/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:43:18 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:10:50 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Con pb el primer elemento de a pasa a ser el primero de b.
 * Con pa el primero de b pasa a ser el primero de a.
 */

void	ft_pb(t_list **lst_a, t_list **lst_b)
{
	t_list	*aux;

	if (*lst_a)
	{
		aux = (*lst_a)->next;
		(*lst_a)->next = *lst_b;
		*lst_b = *lst_a;
		*lst_a = aux;
		write(1, "pb\n", 3);
	}
}

void	ft_pa(t_list **lst_b, t_list **lst_a)
{
	t_list	*aux;

	if (*lst_b)
	{
		aux = (*lst_b)->next;
		(*lst_b)->next = *lst_a;
		*lst_a = *lst_b;
		*lst_b = aux;
		write(1, "pa\n", 3);
	}
}

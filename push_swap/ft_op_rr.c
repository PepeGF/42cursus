/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:21:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:15:12 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * El último elemento de la lista pasa a ser el primero, el primero pasa
 * al segundo y el penúltimo pasa al último.
 * Se desplazan todos hacia la derecha/abajo.
 */

void	ft_rra(t_list **lst)
{
	t_list	*penult;

	penult = ft_lstindex(*lst, ft_lstsize(*lst) - 1);
	penult->next->next = *lst;
	*lst = penult->next;
	penult->next = 0;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **lst)
{
	t_list	*penult;

	penult = ft_lstindex(*lst, ft_lstsize(*lst) - 1);
	penult->next->next = *lst;
	*lst = penult->next;
	penult->next = 0;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **lst_a, t_list **lst_b)
{
	t_list	*penult_a;
	t_list	*penult_b;

	penult_a = ft_lstindex(*lst_a, ft_lstsize(*lst_a) - 1);
	penult_a->next->next = *lst_a;
	*lst_a = penult_a->next;
	penult_a->next = 0;
	penult_b = ft_lstindex(*lst_b, ft_lstsize(*lst_b) - 1);
	penult_b->next->next = *lst_b;
	*lst_b = penult_b->next;
	penult_b->next = 0;
	write(1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:27:58 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:17:31 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Esta función tiene previstas las 5+1 posibilidades existentes para colocar
 * tres números, 5 de ellas desordenadas y una ordenada.
 */

void	ft_order_3(t_list **lst)
{
	int	min;
	int	max;

	min = ft_lstmin_value(*lst);
	max = ft_lstmax_value(*lst);
	if ((*lst)->num == min && (*lst)->next->num == max)
	{
		ft_sa(lst);
		ft_ra(lst);
	}
	else if ((*lst)->next->num == min && (ft_lstlast(*lst))->num == max)
		ft_sa(lst);
	else if ((*lst)->next->num == max && (ft_lstlast(*lst))->num == min)
		ft_rra(lst);
	else if ((*lst)->num == max && (*lst)->next->num == min)
		ft_ra(lst);
	else if ((*lst)->num == max && (ft_lstlast(*lst))->num == min)
	{
		ft_ra(lst);
		ft_sa(lst);
	}
}

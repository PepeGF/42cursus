/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:52:10 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:06:38 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Esta función controla si la lista está ordenada.
 * Compara cada número con el siguiente, si todos son menores que el siguiente
 * davuelve un 1, en caso contrario no estará ordenado y devuelve un 0
 */

int	ft_check_order(t_list *lst)
{
	int		check;
	t_list	*aux;

	if (!lst)
		return (1);
	check = 0;
	aux = lst;
	while (aux->next)
	{
		if (aux->num > aux->next->num)
		{
			return (check);
		}
		aux = aux->next;
	}
	check = 1;
	return (check);
}

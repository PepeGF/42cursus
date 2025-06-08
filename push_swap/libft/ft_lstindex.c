/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:21:58 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/20 10:04:58 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Devuelve un puntero al elemento número index (el primero es el de indice 1)
 * Si index > tamaño de la lista devuelve puntero al último
 * Si index <= 0 devuelve puntero al primero
 */

t_list	*ft_lstindex(t_list *lst, int index)
{
	t_list	*aux;
	int		i;

	if (index > ft_lstsize(lst))
	{
		return (ft_lstlast(lst));
	}
	i = 1;
	aux = lst;
	while (i < index)
	{
		aux = aux->next;
		i++;
	}
	return (aux);
}

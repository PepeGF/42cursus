/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 22:26:37 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:09:25 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Libera todos los malloc hechos en la creación del stack.
 * El segundo auxiliar se utiliza para no perder la dirección de memoria
 * y poder seguir recorriendo la lista.
 */

void	ft_free(t_list *lst)
{
	t_list	*aux;
	t_list	*aux2;

	aux = lst;
	while (aux)
	{
		aux2 = aux->next;
		free(aux);
		aux = aux2;
	}
}

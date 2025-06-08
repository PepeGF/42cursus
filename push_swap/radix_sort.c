/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:51:48 by josgarci          #+#    #+#             */
/*   Updated: 2022/01/01 00:31:50 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
 * Esta es la función principal que ordena. Usa el algoritmo radix sort.
 * Se basa en ir ordenando empezando por el final del número cifra a cifra.
 * Pero ese número será usado en binario y será la posición que asginó
 * la función range.
 * La cantidad de bits necesarios dependerá de cuántos números tenga la lista.
 */

static int	ft_bit_big(int lstlen);

void	ft_radix_sort(t_list **lst_a, t_list **lst_b)
{
	int		i;
	int		bit;
	int		len_a;
	int		bit_max;

	bit = -1;
	len_a = ft_lstsize(*lst_a);
	bit_max = ft_bit_big(len_a);
	while (++bit < bit_max)
	{
		i = 1;
		while (i <= len_a)
		{
			if ((((*lst_a)->range) >> bit) % 2 == 0)
				ft_pb(lst_a, lst_b);
			else
				ft_ra(lst_a);
			i++;
		}
		while (*lst_b)
			ft_pa(lst_b, lst_a);
	}
}

static int	ft_bit_big(int lstlen)
{
	if (lstlen <= 63)
		return (6);
	if (lstlen <= 127)
		return (7);
	if (lstlen <= 255)
		return (8);
	if (lstlen <= 511)
		return (9);
	if (lstlen <= 1023)
		return (10);
	if (lstlen <= 2047)
		return (11);
	return (32);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2022/01/04 11:36:06 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Se empieza creando la lista de números a partir de los datos de entrada.
 * Durante la creación de la lista se verifica que sean todos números.
 * Después se comprueba si hay duplicados.
 * Se asigna un valor que indica la posición final que deberá tener cada num.
 * Se verifica si la lista dada está directamente ordenada.
 * Se ejecuta el algoritmo de ordenación que depende de la cantidad de números.
 */

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		total_numbers;
	int		check;

	stack_a = 0;
	stack_b = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_check_duplicate(stack_a);
	ft_range(stack_a);
	total_numbers = ft_lstsize(stack_a);
	check = ft_check_order(stack_a);
	if (check == 1)
		return (0);
	else if (total_numbers == 3)
		ft_order_3(&stack_a);
	else if (total_numbers <= 31)
		ft_order_5(&stack_a, &stack_b);
	else
		ft_radix_sort(&stack_a, &stack_b);
	ft_free(stack_a);
	return (0);
}

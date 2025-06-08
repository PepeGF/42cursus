/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:41:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/31 23:40:41 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Función para finalizar la ejecución cuando hay algún error.
 */

void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_SUCCESS);
}

/*
 * Esta función genera la lista. Hace split de todos los argumentos en 
 * previsión de que haya varios números en cadenas de texto.
 * Comprueba que todas las subcadenas sean números
 * Convierte las cadenas en números y los añade a la lista.
 */

t_list	**ft_create_stack(t_list **lst, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (i < argc)
	{
		j = -1;
		str = ft_split(argv[i], ' ');
		while (str[++j])
		{
			if (!ft_isnum(str[j]))
			{
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[j])));
				free(str[j]);
			}
			else
				ft_error_exit();
		}
		free(str);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:21:29 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/22 14:53:55 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	n;
	int			neg;

	i = 0;
	neg = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	n *= neg;
	if (n > INT_MAX || n < INT_MIN)
		ft_error_exit();
	return (n);
}

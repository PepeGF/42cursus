/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:40:04 by josgarci          #+#    #+#             */
/*   Updated: 2022/01/01 00:26:28 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "./libft/libft.h"

/**** FUNCIONES DE ENTRADA DE DATOS ****/
t_list	**ft_manage_input(t_list **lst, int argc, char **argv);
int		ft_isnum(char *str);
int		ft_check_repeated(t_list *lst);
int		ft_check_duplicate(t_list *lst);
int		ft_check_order(t_list *lst);
void	ft_error_exit(void);

/**** FUNCIONES DE GENERACIÓN DE LISTAS ****/
t_list	**ft_create_stack(t_list **lst, int argc, char **argv);
void	ft_range(t_list *lst);

/**** FUNCIONES DE ORDENACIÓN ****/
void	ft_order_3(t_list **lst);
void	ft_order_5(t_list **lst_a, t_list **lst_b);
void	ft_radix_sort(t_list **lst_a, t_list **lst_b);

/**** FUNCIONES DE OPERACIONES DE PUSH_SWAP ****/
void	ft_sa(t_list **lst);
void	ft_sb(t_list **lst);
void	ft_ss(t_list **list_a, t_list **list_b);
void	ft_pa(t_list **lst_a, t_list **lst_b);
void	ft_pb(t_list **lst_b, t_list **lst_a);
void	ft_ra(t_list **lst);
void	ft_rra(t_list **lst);
void	ft_rrb(t_list **lst);
void	ft_rrr(t_list **lst_a, t_list **lst_b);

/**** FUNCIONES AUXILIARES DE MAXIMOS Y MINIMOS ****/
int		ft_lstmax_value(t_list *lst);
int		ft_lstmin_value(t_list *lst);
int		ft_lstgetmax_index(t_list *lst);
int		ft_lstgetmin_index(t_list *lst);

/**** FUNCIÓN DE LIBERACIÓN ****/
void	ft_free(t_list *lst);

#endif

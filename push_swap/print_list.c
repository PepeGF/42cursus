void	ft_print_list(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return ;
	aux = lst;
	printf("---------\n");
	while (aux)
	{
		printf("%d - %dº\n", aux->num, aux->range);
		aux = aux->next;
	}
	printf("---------\n");
}

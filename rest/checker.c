/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:49:48 by learodri          #+#    #+#             */
/*   Updated: 2023/01/11 20:55:27 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

/*void	char_check(char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (argv[i])
	{
		k = 0;
		while (argv[i][k])
		{
			if ((argv[i][k] < 48 && argv[i][k] > 57) && argv[i][k] != '-' && argv[i][k] != '+' && argv[i][k] != ' ')
					boom2("tem um char ai fera");
			printf("%c", argv[i][k]);

			k++;	
		}
		i++;
	}
	printf("\n");
}*/

bool has_duplicates(t_stack *a, int n)
{

    while (a)
    {
        if (a->nb == n)
            return true;
        a = a->proximo;
    }  
    return false;
}

int	a_is_sorted(t_stack *a)
{
	while (a->proximo)
	{
		if (a->nb > a->proximo->nb)
			return (0);
		a = a->proximo;
	}
	return (1);
	
}

void	add_index(t_stack **a)
{
	int		i;
	t_stack	*tmp;
	int		max;

	max = INT_MIN; // int min aqui
	i = ft_lstsize(*a) + 1; // tamanho da lista
	while (--i > 0)
	{
		tmp = *a;
		max = INT_MIN;
		while (tmp)
		{
			if (tmp->nb > max && tmp->index == 0) // se o nb do node atual for maior que o minino e index em 0 
				max = tmp->nb; //max fica com o nb
			tmp = tmp->proximo; // proximo node 
		}
		tmp = *a;
		while (tmp->nb != max)
			tmp = tmp->proximo;
		tmp->index = i;
	}
}




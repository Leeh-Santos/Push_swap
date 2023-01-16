/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:49:48 by learodri          #+#    #+#             */
/*   Updated: 2023/01/16 21:04:38 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

void	char_check(char **argv, t_stack **a)
{
	int	i;
	int k;
	i = 0;
	k = 1;
	
	while (argv[k])
	{
		i = 0;
		while (argv[k][i])
		{
			if ((argv[k][i] >= 48 && argv[k][i] <= 57) || argv[k][i] == '-' || argv[k][i] == '+' || argv[k][i] == ' ')
				 i++;
			else 
				boom(a);
		}
		k++;
	}
				
}

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




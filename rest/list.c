/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:59:07 by learodri          #+#    #+#             */
/*   Updated: 2023/01/03 19:29:22 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "../push_swap.h"

void	ft_lstadd_back(t_stack **a, t_stack *new)
{
	t_stack	*tmp;

	if (!new) //s n tiver nada
		return ;
	if (!*a) // se o teu ponteira A tiver em NULL
	{
		*a = new;//a fica com primeiro node e vaza
		return ;
	}
	tmp = *a;
	while (tmp->proximo)
		tmp = tmp->proximo; // vai avacar ate chega null
	tmp->proximo = new;
}

t_stack *create_node(int n)
{
    t_stack *temp;

    temp = malloc(sizeof(t_stack));

    if(!temp)
        return NULL;

    temp->nb = n;
    temp->proximo = NULL;

    return (temp);
    
}

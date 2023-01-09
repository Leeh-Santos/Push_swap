/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:32:11 by learodri          #+#    #+#             */
/*   Updated: 2023/01/09 19:21:01 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

void	reverse_a(t_stack **a)
{
	t_stack *atual;
	
	atual = *a; // armazena o primeiro
	
	while (atual->proximo->proximo != NULL) // avanca ate pegar o penultimo
	{
		atual = atual->proximo;
	}

	atual->proximo->proximo = *a; // ultimo vira o header 
	*a = atual->proximo; // vira o last node
	atual->proximo = NULL; // aterra 
	write(1, "rra\n", 4);

}

void	reverse_b(t_stack **b)
{
	t_stack *atual;

	atual = *b; // armazena o header
	while (atual->proximo->proximo != NULL) //vai ate o penultimo
	{
		atual = atual->proximo;
	}

	atual->proximo->proximo = *b;
	*b = atual->proximo;
	atual->proximo = NULL;
	write(1, "rrb\n", 4);
}

void	reverse_a_b(t_stack **a, t_stack **b)
{
	reverse_a(a);
	reverse_b(b);
	write(1, "rrr\n", 4);
}
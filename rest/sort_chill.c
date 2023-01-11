/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:20:26 by learodri          #+#    #+#             */
/*   Updated: 2023/01/11 21:58:15 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

void	for_3(t_stack **a) // only compares the 3 positions
{
	if (((*a)->nb < (*a)->proximo->nb) && ((*a)->proximo->nb > \
	(*a)->proximo->proximo->nb) && ((*a)->nb < (*a)->proximo->proximo->nb))
	{
		swap_a(a);
		rotate_a(a);
	}
	if (((*a)->nb < (*a)->proximo->nb) && ((*a)->proximo->nb > \
	(*a)->proximo->proximo->nb) && (*a)->nb > (*a)->proximo->proximo->nb)
		reverse_a(a);
	if (((*a)->nb > (*a)->proximo->nb) && ((*a)->proximo->nb < \
	(*a)->proximo->proximo->nb) && (*a)->nb < (*a)->proximo->proximo->nb)
		swap_a(a);
	if (((*a)->nb > (*a)->proximo->nb) && ((*a)->proximo->nb < \
	(*a)->proximo->proximo->nb) && (*a)->nb > (*a)->proximo->proximo->nb)
		rotate_a(a);
	if (((*a)->nb > (*a)->proximo->nb) && ((*a)->proximo->nb > \
	(*a)->proximo->proximo->nb) && (*a)->nb > (*a)->proximo->proximo->nb)
	{
		swap_a(a);
		reverse_a(a);
	}
	return ;
}

void	get_min(t_stack *a, int *menor)
{
	while (a)
	{
		if (a->index < *menor)
			*menor = a->index;
		a = a->proximo;
	}
	
}

void	get_max(t_stack *a, int *maior)
{
	while (a)
	{
		if (a->index > *maior)
			*maior = a->index;
		a = a->proximo;
	}
}


void	for_4(t_stack **a, t_stack **b)
{
	int	maior;
	int menor;
	
	menor = INT_MAX;
	maior = INT_MIN;
	get_min(*a, &menor);
	get_max(*a, &maior);
	while ((*a)->index != menor && (*a)->index != maior)
		rotate_a(a);
	push_b(a, b);
	if (!a_is_sorted(*a))reverse_a;
		for_3(a);
	push_a(a, b);
	if ((*a)->index == maior)
		rotate_a(a);
}
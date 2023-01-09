/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:20:26 by learodri          #+#    #+#             */
/*   Updated: 2023/01/09 21:45:52 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

void	sort_3(t_stack **a) // only compares the 3 positions
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:42:40 by learodri          #+#    #+#             */
/*   Updated: 2023/01/16 20:34:56 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	boom(t_stack **a)
{
	t_stack	*tmp;
	
	write(2,"Error\n", 6);
	
	if(*a)
	{
		while(*a)
		{
			tmp = (*a);
			(*a) = (*a)->proximo;
			free(tmp);
		}
	}

	exit(0);
}


void	end_push(t_stack **a)
{
	t_stack	*tmp;

	if(*a)
	{
		while(*a)
		{
			tmp = (*a);
			(*a) = (*a)->proximo;
			free(tmp);
		}
	}
	exit(0);
}

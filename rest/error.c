/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 19:42:40 by learodri          #+#    #+#             */
/*   Updated: 2023/01/04 20:50:13 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	boom(t_stack **a, char *str)
{
	t_stack	*tmp;
	
	perror(str);
	write(2, "\n", 1);
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

void	boom2(char *str)
{
	perror(str);
	exit(0);
}


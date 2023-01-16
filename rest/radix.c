/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:31:03 by learodri          #+#    #+#             */
/*   Updated: 2023/01/16 19:14:56 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	index_bit(t_stack *a) // para ver quantos bits tem o maior da stack 5 = 101 = 3
{
	int	max;
	int	bits;

	bits = 0;
	max = INT_MIN;// max com o index do maior nb 
	get_max(a, &max);
	while (max && ++bits) // enquanto o maior nb e o bits for difente de 0
		max >>= 1; // vai empurrando o max ate chegar 
	return (bits); // retorna a qtd de bits do index 
	
}

void	radix(t_stack **a, t_stack **b)
{
	int		max_bits;
	int		i;
	int		size;
	t_stack	*tmp;
 
	max_bits = index_bit(*a); // 5 = 101 = 3
	i = -1;
	while (++i < max_bits) // o numero de vezes de acordo con bit do maior nb, pra dps colocar e tiras das stacis 
	{
		size = ft_lstsize(*a);
		while (size--)
		{
			tmp = *a;
			if ((tmp->index >> i & 1)) // index = 4 --------> 4 = 100 // empurra e compara com o bit 1. o i vai aumentanto pra comparar cada bit ---> 1 0 1i /// 1 0i 1 //// 1i 0 1
				rotate_a(a); // vai pra stack a que tem binario 1 
			else
				push_b(a, b);// vai pra stack b  que tem binario 0
		}
		while (*b) // tudo que foi pra be volta pa stack a
			push_a(a, b);
	}
}
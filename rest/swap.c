/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:00:22 by learodri          #+#    #+#             */
/*   Updated: 2023/01/05 21:05:41 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap_a(t_stack **a) //This allows the function to modify the head of the list if the first node is removed or if the first two nodes are swapped.
{
   
   t_stack *second;

   second = (*a)->proximo; // sec with second node 
   (*a)->proximo = second->proximo;  // Connect the first node to the third node.
   second->proximo = *a;// Connect the second node to the first node.
   *a = second;  // Update the head to point to the second node.
   write(1, "sa\n", 3);
}

void    swap_b(t_stack **b)
{
   t_stack *second;

   second = (*b)->proximo;
   (*b)->proximo = second->proximo;
   second->proximo = *b;
   *b = second;
   write(1, "sb\n", 3);

}

void    swap_ab(t_stack **a, t_stack **b)
{
   swap_a(a);
   swap_b(b);
   write(1, "ss\n", 3);
}
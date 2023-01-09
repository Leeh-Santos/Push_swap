/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:16:09 by learodri          #+#    #+#             */
/*   Updated: 2023/01/09 19:54:07 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*(push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.*/

void    push_b(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!*a)
        return ;
    tmp = (*a)->proximo;
    (*a)->proximo = (*b);
    (*b) = (*a);
    (*a) = tmp;
    write(1, "pb\n", 3);
}

void    push_a(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!*b)
        return ;
    tmp = (*b)->proximo;
    (*b)->proximo = (*a);
    (*a) = (*b);
    (*b) = tmp;
    write(1, "pa\n", 3);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:25:00 by learodri          #+#    #+#             */
/*   Updated: 2023/01/05 21:58:07 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//the first element becomes the last one.
void    rotate_a(t_stack **a)
{
    t_stack *tp; // p armazenar o primeiro node 
    t_stack *atual; // pra atravesar a lista 

    tp = *a; // guarda o primeiro
    *a = (*a)->proximo; // avanza o node, se nao avanzar ele perde o node e fica so no priemiro
    
    atual = *a; // pra tansversar a partir do a

    while (atual->proximo != NULL) // avanza ate o ultimo no
	{
        atual = atual->proximo;
	}

	atual->proximo = tp; // atribui o tp que tem o a al final da lista
	tp->proximo = NULL; // aponta ele null p encerrar lista

}
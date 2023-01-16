/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:55:10 by learodri          #+#    #+#             */
/*   Updated: 2023/01/16 21:17:19 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char *argv[])
{
	(void)argc;
    

	t_stack *a;
	t_stack *b;
	t_stack *tmp;
	
	a = NULL;
	b = NULL;
	
	
	if(argc <= 2)
		end_push(&a);

	
	char_check(argv, &a);
	parse_arg(&a, argv);
	add_index(&a);
	if (a_is_sorted(a))
		end_push(&a);
	if (ft_lstsize(a) == 2)
		swap_a(&a);
	if (ft_lstsize(a) == 3)
		for_3(&a);
	if (ft_lstsize(a) == 4)
		for_4(&a, &b);
	if (ft_lstsize(a) == 5)
		for_5(&a, &b);
	if (ft_lstsize(a) > 5)
		radix(&a, &b);
	end_push(&a);
	

	tmp = a;

	while(tmp != NULL){
		printf("%d -----------> %d \n",tmp->nb, tmp->index);
		tmp= tmp->proximo;
	}

	
	
	
	
	return (0);
}


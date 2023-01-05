/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:55:10 by learodri          #+#    #+#             */
/*   Updated: 2023/01/05 21:47:05 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char *argv[])
{
	(void)argc;
    //(void)argv;

	t_stack *a;
	t_stack *tmp;
	
	//int i = 1;
	a = NULL;
	//int n = 0;
	
	if(argc <= 1)
		boom(&a, "arg menor ou igual 1");

	//char_check(argv);
	parse_arg(&a, argv);
	
	//swap_a(&a);
	rotate_a(&a);

	// verificar stack
	tmp = a;

	while(tmp != NULL){
		printf("%d \n",tmp->nb);
		tmp= tmp->proximo;
	}
	
	
	
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:55:10 by learodri          #+#    #+#             */
/*   Updated: 2023/01/09 21:19:56 by learodri         ###   ########.fr       */
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
	
	if (a_is_sorted(a))
		boom(&a, "ja ta sortido parca");
	if (ft_lstsize(a) == 2)
		swap_a(&a);
	if (ft_lstsize(a) == 3)
		sort_3(&a);

	// verificar stack
	tmp = a;

	while(tmp != NULL){
		printf("%d \n",tmp->nb);
		tmp= tmp->proximo;
	}
	
	
	
	return (0);
}


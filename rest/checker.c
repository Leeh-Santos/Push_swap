/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:49:48 by learodri          #+#    #+#             */
/*   Updated: 2023/01/09 21:20:31 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

/*void	char_check(char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (argv[i])
	{
		k = 0;
		while (argv[i][k])
		{
			if ((argv[i][k] < 48 && argv[i][k] > 57) && argv[i][k] != '-' && argv[i][k] != '+' && argv[i][k] != ' ')
					boom2("tem um char ai fera");
			printf("%c", argv[i][k]);

			k++;	
		}
		i++;
	}
	printf("\n");
}*/

bool has_duplicates(t_stack *a, int n)
{

    while (a)
    {
        if (a->nb == n)
            return true;
        a = a->proximo;
    }  
    return false;
}

int	a_is_sorted(t_stack *a)
{
	while (a->proximo)
	{
		if (a->nb > a->proximo->nb)
			return (0);
		a = a->proximo;
	}
	return (1);
	
}




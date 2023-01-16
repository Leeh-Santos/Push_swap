/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:10:49 by learodri          #+#    #+#             */
/*   Updated: 2023/01/16 20:49:56 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *nptr, t_stack **a)
{
	long long	r;
	long long	result;

	r = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			r = -1;
		nptr++;
	}
	while (*nptr != '\0' && *nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (r * (*nptr - 48));
		if (result > 2147483647)
			boom(a);
		if (result < -2147483648)
			boom(a);
		nptr++;
	}
	return (result);
}


void    parse_arg(t_stack **a, char **argv)
{
    int i; 
    long n;

    i = 1;
	n = 0;
    while(argv[i])
    {
        n = ft_atoi(argv[i], a); 
		if (has_duplicates(*a, n) == true)
			boom(a); 
        ft_lstadd_back(a ,(create_node(n)));
		i++;
    }
}
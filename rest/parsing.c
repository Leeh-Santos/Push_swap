/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:10:49 by learodri          #+#    #+#             */
/*   Updated: 2023/01/04 21:31:41 by learodri         ###   ########.fr       */
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
			boom(a, "int grandao");
		if (result < -2147483648)
			boom(a, "int minusculo");
		nptr++;
	}
	return (result);
}

/*int	parse_helper(char *str)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (1);
			j++;
		}
		if ((str[i] < '0' || str[i] > '9') && (str[i] != '-' && str[i] != '+'))
			return (1);
		if (j > 1)
			return (1);
	}
	return (0);
}

long	ft_atoi(char *str)
{
	long long	n;
	int			sig;
	int			i;

	n = 0;
	sig = 1;
	i = 0;
	if (parse_helper(str))
		return (2147483648);
	if (str[i] == '-' || str[i] == '+')
	{
		sig = (str[i] != '-') - (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + sig * (str[i++] - '0');
		if (n > INT_MAX || n < INT_MIN)
			return (2147483648);
	}
	return (n);
}*/


void    parse_arg(t_stack **a, char **argv)
{
    int i; 
    long n;

    i = 1;
    

    while(argv[i])
    {
        n = ft_atoi(argv[i], a); 
		if (has_duplicates(*a, n) == true)
			boom(a, "tem duplicado"); 
        ft_lstadd_back(a ,(create_node(n)));
		i++;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:07:54 by learodri          #+#    #+#             */
/*   Updated: 2023/01/05 21:33:51 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

typedef struct s_stack{
    int nb;
    struct s_stack *proximo;

} t_stack;

void	ft_lstadd_back(t_stack **a, t_stack*new);
t_stack *create_node(int n);
void	boom(t_stack **a, char *str);
long	atoi_parse(char **str, int s, long long n);
void    parse_arg(t_stack **a, char **argv);
void	boom2(char *str);
void	char_check(char **argv);
bool has_duplicates(t_stack *a, int n);
void    swap_a(t_stack **a);
void    swap_b(t_stack **b);
void    swap_ab(t_stack **a, t_stack **b);

void    rotate_a(t_stack **a);



#endif
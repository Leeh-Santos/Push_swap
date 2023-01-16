/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <learodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:07:54 by learodri          #+#    #+#             */
/*   Updated: 2023/01/16 20:31:48 by learodri         ###   ########.fr       */
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
    int	index;
    struct s_stack *proximo;

} t_stack;

void	ft_lstadd_back(t_stack **a, t_stack*new);
t_stack *create_node(int n);
void	boom(t_stack **a);
long	atoi_parse(char **str, int s, long long n);
void    parse_arg(t_stack **a, char **argv);
int	ft_lstsize(t_stack *lst);
void	char_check(char **argv, t_stack **a);
bool has_duplicates(t_stack *a, int n);
void	add_index(t_stack **a);

int	a_is_sorted(t_stack *a);

void	get_min(t_stack *a, int *menor);
void	get_max(t_stack *a, int *maior);

void    swap_a(t_stack **a);
void    swap_b(t_stack **b);
void    swap_ab(t_stack **a, t_stack **b);

void    rotate_a(t_stack **a);
void    rotate_b(t_stack **b);
void	rotate_a_b(t_stack **a, t_stack **b);

void	reverse_a(t_stack **a);
void	reverse_b(t_stack **b);
void	reverse_a_b(t_stack **a, t_stack **b);

void    push_a(t_stack **a, t_stack **b);
void    push_b(t_stack **a, t_stack **b);

void    for_3(t_stack **a);
void	for_4(t_stack **a, t_stack **b);
void	for_5(t_stack **a, t_stack **b);

void	radix(t_stack **a, t_stack **b);

void	end_push(t_stack **a);


#endif
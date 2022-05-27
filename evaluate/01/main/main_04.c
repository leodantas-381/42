/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:35:12 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/16 17:58:36 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	value1 = 30;
	int	value2 = 20;
	int *p1 = &value1;
	int *p2 = &value2;
	printf("value was: %d \n", value1);
	ft_ultimate_div_mod(p1, p2);
	printf("value is: %d \n", value1);
}
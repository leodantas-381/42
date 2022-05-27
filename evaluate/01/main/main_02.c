/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:30:47 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/16 17:54:53 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	value1 = 10;
	int	value2 = 20;
	int *p1 = &value1;
	int *p2 = &value2;
	printf("value was: %d \n", value1);
	ft_swap(p1, p2);
	printf("value is: %d \n", value1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:33:34 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/16 17:57:59 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	value1 = 30;
	int	value2 = 20;
	int	value3 = 0;
	int value4 = 0;
	int *p1 = &value3;
	int *p2 = &value4;
	printf("value was: %d \n", value3);
	ft_div_mod(value1, value2, p1, p2);
	printf("value is: %d \n", value3);
}

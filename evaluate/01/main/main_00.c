/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:27:36 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/16 17:50:31 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int value = 10;
	int *p1 = &value;
	printf("value was: %d \n", value);
	ft_ft(p1);
	printf("value is: %d \n", value);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_06.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:37:23 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/16 17:53:20 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char name[3] = "leo";
	char *n;
	
	n = &name[0];
	printf("strlen is: %d \n", ft_strlen(n));
}
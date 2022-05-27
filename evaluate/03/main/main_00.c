/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:53:11 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 02:23:06 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char name1[30] = "leonardo";
	char name2[30] = "leqnardo";

	printf("%d \n", strcmp(name1, name2));
	printf("%d \n", ft_strcmp(name1, name2));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:02:51 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 02:28:43 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char name1[30] = "leonardo";
	char name2[30] = "araujo";

	//printf("%s \n", strncat(name1, name2, 3));
	printf("%s \n", ft_strncat(name1, name2, 3));
}
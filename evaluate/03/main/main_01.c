/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:51:41 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 02:24:16 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char name1[30] = "leonardo";
	char name2[30] = "leonardo..";

	printf("%d \n", strncmp(name1, name2, 5));
	printf("%d \n", ft_strncmp(name1, name2, 5));
}

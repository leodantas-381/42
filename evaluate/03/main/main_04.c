/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:06:29 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 02:11:22 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char name1[30] = "leonardo";
	char name2[30] = "araujo";
	
	printf("%s", strstr(name1, name2));
	printf("%s", ft_strstr(name1, name2));
}
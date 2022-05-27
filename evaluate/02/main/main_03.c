/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:16:42 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:11:36 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char numeric[] = "123484";
	char not_numeric[] = "1543a354";
	char empty[] = "";
	printf("numeric %d \n", ft_str_is_numeric(numeric));
	printf("not numeric %d \n", ft_str_is_numeric(not_numeric));
	printf("empty %d \n", ft_str_is_numeric(empty));
}

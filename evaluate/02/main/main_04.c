/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:17:24 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:12:50 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char lower[] = "abqdbmy";
	char not_lower[] = "afasdsaADSFADSdsfds";
	char empty[] = "";
	printf("lowercase %d \n", ft_str_is_lowercase(lower));
	printf("not lowercase %d \n", ft_str_is_lowercase(not_lower));
	printf("empty %d \n", ft_str_is_lowercase(empty));
}

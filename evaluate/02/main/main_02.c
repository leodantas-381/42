/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:15:40 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:11:37 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char alpha[] = "abcasFASsfdsaS";
	char not_alpha[] = "adsf@ffg";
	char empty[] = "";
	printf("alpha %d \n", ft_str_is_alpha(alpha));
	printf("not alpha %d \n", ft_str_is_alpha(not_alpha));
	printf("empty %d \n", ft_str_is_alpha(empty));
}

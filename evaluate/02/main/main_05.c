/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:18:03 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 04:10:00 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char upper[] = "ADFAGADS";
	char not_upper[] = "DSdsSFfsd";
	char empty[] = "";
	printf("upper %d \n", ft_str_is_uppercase(upper));
	printf("not upper %d \n", ft_str_is_uppercase(not_upper));
	printf("empty %d \n", ft_str_is_uppercase(empty));
}

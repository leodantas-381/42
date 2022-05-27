/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_06.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:37:23 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:14:08 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char printable[] = "saidh!@gbi!#T";
	char not_printable[] = "fasdas \n";
	char empty[] = "";
	printf("%d \n", ft_str_is_printable(printable));
	printf("%d \n", ft_str_is_printable(not_printable));
	printf("%d \n", ft_str_is_printable(empty));
}
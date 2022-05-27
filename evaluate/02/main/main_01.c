/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:12:25 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/18 23:55:46 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char last_name[] = "araujo";
	char last_name2[] = "araujo";
	char new_last_name[] = "dantadbsfgvsdfs";
	char new_last_name2[] = "dantadbsfgvsdfs";
	printf("before %s %s \n", last_name, new_last_name);
	printf("before %s %s \n", last_name2, new_last_name2);
	strncpy(last_name2, new_last_name2, 3);
	ft_strncpy(last_name, new_last_name, 3);
	printf("after %s %s \n", last_name, new_last_name);
	printf("after %s %s \n", last_name2, new_last_name2);
}
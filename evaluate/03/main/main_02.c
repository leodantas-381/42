/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:00:02 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 02:26:52 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

 char *ft_strcat(char *dest, char *src);
 
int	main(void)
{
	char name1[30] = "leonardo";
	char name2[30] = "araujo";

	//printf("%s \n", strcat(name1, name2));
	printf("%s \n", ft_strcat(name1, name2));
}

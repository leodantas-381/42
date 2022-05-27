/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:41:02 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 00:08:39 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[35] = "araujo";
	char dest2[35] = "araujo";
	char src[35] = "dantadbsfgvsdfs";
	char src2[35] = "dantadbsfgvsdfs";
	printf("before %s %s \n", dest, src);
	printf("before %s %s \n", dest2, src2);
	ft_strcpy(dest, src);
	strcpy(dest2, src2);
	printf("after %s %s \n", dest, src);
	printf("after %s %s \n", dest2, src2);
}
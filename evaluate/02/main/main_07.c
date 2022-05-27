/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:21:25 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/18 23:33:24 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char lowcase[] = "dsfahgrwgavdsfa";
	char upcase[] = "SFDGsdfsaSDffff21654s";
	printf("%s\n", ft_strupcase(lowcase));
	printf("%s\n", ft_strupcase(upcase));
}
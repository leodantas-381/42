/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:20:50 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/18 23:33:46 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char lowcase[] = "dsfahgrwgavdsfa";
	char upcase[] = "SFDGsdfsaSDffff21654s";
	printf("%s\n", ft_strlowcase(lowcase));
	printf("%s\n", ft_strlowcase(upcase));
}

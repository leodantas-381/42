/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:37:56 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:08:34 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	q;

	i = 0;
	q = 1;
	while (str[i] >= 'A' && str[i] <= 'Z')
		i++;
	if (str[i])
		q = 0;
	return (q);
}

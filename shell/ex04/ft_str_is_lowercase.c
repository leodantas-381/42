/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:22:58 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:08:36 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	q;

	i = 0;
	q = 1;
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	if (str[i])
		q = 0;
	return (q);
}

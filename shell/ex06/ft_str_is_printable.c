/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:45:28 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:08:32 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	q;

	i = 0;
	q = 1;
	while (str[i] > 32 && str[i] < 127)
		i++;
	if (str[i])
		q = 0;
	return (q);
}

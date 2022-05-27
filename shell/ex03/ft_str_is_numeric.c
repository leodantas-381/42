/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laraujo- <laraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:13:38 by laraujo-          #+#    #+#             */
/*   Updated: 2022/02/19 03:08:38 by laraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	q;

	i = 0;
	q = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i])
		q = 0;
	return (q);
}

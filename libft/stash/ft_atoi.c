/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:47:03 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/06 08:44:52 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	counter;
	int	ret_val;
	int	sign;

	counter = 0;
	sign = 1;
	ret_val = 0;
	while (str[counter] == ' ' || (str[counter] > 8 && str[counter] < 14))
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = -1;
		counter++;
	}
	while (str[counter] == '0')
		counter++;
	while (str[counter] != '\0' && (str[counter] <= '9' && str[counter] >= '0'))
	{
		ret_val = (ret_val * 10) + (str[counter] - 48);
		counter++;
	}
	return (ret_val * sign);
}

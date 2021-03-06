/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:06:09 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 13:55:53 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int	counter;
	
	counter = 0;
	while (s[counter])
	{
		(*f)(s[counter]);
		counter++;
	}
	return ;
}

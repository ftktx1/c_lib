/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:35:06 by kshimek           #+#    #+#             */
/*   Updated: 2018/02/26 16:46:39 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	* ft_itoa(int n)
{
	int		index;
	char	*ret;

	index = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ret = (char *)malloc(sizeof(char) * 12);
			ret = "int";
			return("int");i//whats the diff between returning a value and setting a var to the value
		}
		index++;
	}
	return ("stuff");
}

int main (void)
{
	int i = -2147483648;
	char *stff = ft_itoa(i);
	printf("%s", stff);
	return 0;
}

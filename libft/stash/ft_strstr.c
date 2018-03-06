/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:23:18 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/06 08:47:52 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	haystack_counter;
	int	needle_counter;

	haystack_counter = 0;
	needle_counter = 0;
	while (haystack[haystack_counter] != '\0')
	{
		while (haystack[haystack_counter] == needle[needle_counter])
		{
			needle_counter++;
			haystack_counter++;
		}
		if (needle[needle_counter] == '\0')
			return ((char *)&haystack[haystack_counter - needle_counter]);
		needle_counter = 0;
		haystack_counter++;
	}
	return (NULL);
}

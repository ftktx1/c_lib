/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:23:41 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 13:49:51 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	haystack_counter;
	int	needle_counter;

	haystack_counter = 0;
	needle_counter = 0;
	while (haystack[haystack_counter] != '\0' && haystack_counter < len)
	{
		while (haystack[haystack_counter] == needle[needle_counter] && haystack_counter < len)
		{
			needle_counter++;
			haystack_counter++;
		}
		if (needle[needle_counter] == '\0')
			return (&haystack[haystack_counter - needle_counter]);
		needle_counter = 0;
		haystack_counter++;
	}
	return (NULL);
}

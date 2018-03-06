/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 11:45:25 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 13:47:01 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	dst_counter;
	int	src_counter;
	
	src_counter = 0;
	dst_counter = dst_size - ft_strlen(dst) - 2;
	while (*src != '\0' && dst_counter < dstsize - 2)
	{
		dst[dst_counter] = src[src_counter]
		src_counter++;
		dst_counter++;
	}
	dst[dst_counter] == '\0';
	return ((size_t)(ft_strlen(dst) + ft_strlen(src)));
}

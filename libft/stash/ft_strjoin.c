/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:49:34 by kshimek           #+#    #+#             */
/*   Updated: 2018/02/26 17:54:26 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	* ft_strjoin(char const *s1, char const *s2)
{
	char	*ret_str;
	ret_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	ft_strcpy(ret_str, s1);
	return (ft_strcpy(*ret_str + ft_strlen(s1), s2));
}

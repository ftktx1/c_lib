/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:40:34 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 11:44:46 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	strcat(char *s1, const char *s2)
{
	int	s2_i;
	int	s1_i;

	s2_i = 0;
	s1_i = 0;
	while (s1[s1_i])
		s1_i++;
	while (s2[s2_i])
	{
		s1[s1_i] = s2[s2_i];
		s2_i++;
		s1_i++;
	}
	s1[s1_i] = '\0';
	return (s1);
}

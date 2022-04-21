/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:59:11 by meltremb          #+#    #+#             */
/*   Updated: 2022/04/05 13:21:46 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   ___-------------------v there it is (last occurence)
 * 	|	str = "The cake is a lie"		c = 'a'_______	 ____
 * 	|__________________________	    				  | |    |
 *						       |					  |_|____|
 *							   |________________________| 				      */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp;

	temp = s;
	while (*s)
		s++;
	while (s >= temp)
		if (*s-- == (char) c)
			return ((char *)s + 1);
	return (NULL);
}

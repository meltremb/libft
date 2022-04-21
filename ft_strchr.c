/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:29:33 by meltremb          #+#    #+#             */
/*   Updated: 2022/04/05 14:34:49 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   ___------------v there it is (first occurence)
 * 	|	str = "The cake is a lie"		c = 'a'_______	 ____
 * 	|__________________________	    				  | |    |
 *						       |					  |_|____|
 *							   |________________________| 				      */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == (char)c)
			return ((char *)s - 1);
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}

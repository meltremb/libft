/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:18:23 by meltremb          #+#    #+#             */
/*   Updated: 2022/04/05 11:09:47 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* That function is the first actually useful one in this library. You're gonna
 * love it so much. You're gonna be addicted to returning the length of a 
 * string. You're strlensexual now. you are into string lengths. */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

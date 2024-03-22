/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpruvot < mpruvot@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:11:53 by mpruvot           #+#    #+#             */
/*   Updated: 2024/03/22 11:18:19 by mpruvot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/*
DESCRIPTION
The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the
string; therefore if c is ‘\0’, the functions locate the terminating ‘\0’.
The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
*/
char	*ft_strchr(char *s, int c)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

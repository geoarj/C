/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:47:16 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/24 16:08:19 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	char	*newstr;

	a = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(newstr = (char*)malloc(sizeof(char) * (ft_strlen(s1)
	+ ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
	{
		newstr[a] = *s1++;
		a++;
	}
	while (*s2)
	{
		newstr[a] = *s2++;
		a++;
	}
	newstr[a] = '\0';
	return (newstr);
}

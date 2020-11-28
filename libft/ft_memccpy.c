/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:50:44 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/24 16:09:12 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			m;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	m = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	ch = (unsigned char)c;
	while (m < n)
	{
		*d = s[m];
		d++;
		if (ch == s[m])
			return (d);
		m++;
	}
	return (NULL);
}

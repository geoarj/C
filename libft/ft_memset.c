/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:35:46 by dhakon            #+#    #+#             */
/*   Updated: 2020/10/31 20:47:37 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char		*nice;
	int					i;

	i = 0;
	nice = (unsigned char *)dest;
	while (count > 0)
	{
		*nice = ch;
		nice++;
		count--;
	}
	return (dest);
}

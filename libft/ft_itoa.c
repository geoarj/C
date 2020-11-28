/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:30:01 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/27 22:18:23 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_digits(int m)
{
	size_t	i;

	i = 0;
	while (m / 10)
	{
		m /= 10;
		i++;
	}
	return (m < 0 ? i + 2 : i + 1);
}

char			*ft_itoa(int n)
{
	unsigned	int		num;
	long		int		len;
	char				*s;
	unsigned int		i;

	num = n < 0 ? n * -1 : n;
	i = 0;
	len = ft_count_digits(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (n < 0)
		s[i++] = '-';
	s[len--] = '\0';
	while (len >= i)
	{
		s[len] = num % 10 + 48;
		num /= 10;
		len--;
	}
	return (s);
}

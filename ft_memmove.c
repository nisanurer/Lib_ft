/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nier <nier@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:39:12 by nier              #+#    #+#             */
/*   Updated: 2025/06/29 16:39:38 by nier             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	forward_copy(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;	

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

static void	backward_copy(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n--)
		d[n] = s[n];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		forward_copy(d, s, n);
	else
		backward_copy(d, s, n);
	return (dest);
}

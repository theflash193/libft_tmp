/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 13:30:02 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 17:57:55 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	void	*ptr;

	ptr = dst;
	while (len--)
		*(unsigned int *)dst++ = *(unsigned int *)src++;
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:29:32 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 16:44:50 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	int i;
	int j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (ft_isblank2(*(s + i)))
		i++;
	while (ft_isblank2(*(s + j - 1)))
		j--;
	return (ft_strsub(s, i, (j != 0) ? j -= i : j));
}

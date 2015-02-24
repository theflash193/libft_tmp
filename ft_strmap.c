/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:27:53 by grass-kw          #+#    #+#             */
/*   Updated: 2015/02/24 16:36:09 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		l;
	int		i;
	char	*ret;

	if (s == NULL || f == NULL)
		return (NULL);
	l = ft_strlen(s);
	ret = ft_strnew(l);
	while (s[i])
	{
		ret[i] = (*f)(s[i]);
		i++;
	}
	return (ret);
}

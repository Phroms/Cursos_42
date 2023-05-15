/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:01:11 by agrimald          #+#    #+#             */
/*   Updated: 2023/05/15 21:17:23 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 			*nuevoStr;
	unsigned int	i;

	nuevoStr = ft_strdup(s);

	i = 0;
	if (!nuevoStr || !s || !f)
		return (NULL);
	while (s[i])
	{
		nuevoStr[i] = f(i, s[i]);
		i++;
	}
	nuevoStr[i] = '\0';
	return (nuevoStr);
}

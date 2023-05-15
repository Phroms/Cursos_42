/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:45:51 by agrimald          #+#    #+#             */
/*   Updated: 2023/05/15 21:10:47 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	*ft_substr(char const *s, unsigned int start, size_t len)
/*{
	char *nuevaStr;
	unsigned int i;

	nuevaStr = malloc(len);
	if (nuevaStr == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		nuevaStr[i] = s[start + i];//start marca el inicio;
		i++;
	}
	if ()
	return (nuevaStr);
}*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *nuevaStr;
    size_t i;
	size_t p;
	
	p = ft_strlen(s);
	if (start >= p)
			return (ft_strdup(""));
	if (start + len == p + 1 || len > p)
		len = p - start;
    nuevaStr = (char *)malloc(len + 1);
    if (!nuevaStr)
        return NULL;
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        nuevaStr[i] = s[start + i];
        i++;
    }
    nuevaStr[i] = '\0';
   	return nuevaStr;
}

/*int main()
{
	char dst[] = "";
	char *p;
	p = ft_substr(dst, 5, 3);
	printf("%s", p);
}*/

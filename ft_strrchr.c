/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achan-my <achan-my@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:02:41 by achan-my          #+#    #+#             */
/*   Updated: 2025/09/10 10:24:59 by achan-my         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_ouc;

	last_ouc = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			last_ouc = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (last_ouc);
}

/*int main()
{
    char a[] = "Hello World";
    char *b;
    b = ft_strrchr(a, 'o');
    printf("%s", b);
    return 0;
}*/

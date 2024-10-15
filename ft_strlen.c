/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:58:07 by ttroll            #+#    #+#             */
/*   Updated: 2024/10/15 11:02:31 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while(s[c] != '\0')
	{
		c++;
	}
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *a = "Aledumm";
// 	printf("%zu", ft_strlen(a));
//     return 0;
// }

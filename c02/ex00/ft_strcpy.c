/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 19:00:51 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	dest[30] = "Tu vas rater"; //Good to give the same size to both array
	char	src[30] = "Tu vas réussir !"; //Good to give the same size to both array
	printf("String 1 = %s\n", dest); 
	printf("String 2 = %s\n", src);

	ft_strcpy(dest, src);
	//strcpy(dest, src); //Original function
	printf("String 1 is now = %s\n", dest);
	return (0);
} */

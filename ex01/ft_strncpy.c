/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gliano-r <gliano-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:00:58 by gliano-r          #+#    #+#             */
/*   Updated: 2020/02/13 11:15:16 by gliano-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdel-ros <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:50:06 by jdel-ros     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/04 11:22:17 by jdel-ros    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long int	i;
	char				*dst1;
	const char			*src1;

	if (!(dst || src))
		return (0);
	i = 0;
	dst1 = dst;
	src1 = src;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	dst = dst1;
	return (dst);
}

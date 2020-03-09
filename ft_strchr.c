/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdel-ros <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:37:40 by jdel-ros     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 12:52:19 by jdel-ros    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	if (!(s))
		return (0);
	if (c == '\0')
		return ((char *)s + len);
	while (s[i] && s[i] != c)
		i++;
	if (i == len)
		return (0);
	else
		return ((char *)s + i);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jdel-ros <jdel-ros@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 19:02:56 by jdel-ros     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/18 15:18:53 by jdel-ros         ###   ########lyon.fr   */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(long int n)
{
	{
		if (n >= 0 && n <= 9)
			ft_putchar(n + 48);
		else if (n < 0)
		{
			ft_putchar('-');
			ft_putnbr(-n);
		}
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}

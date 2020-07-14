/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soseroal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:54:02 by soseroal          #+#    #+#             */
/*   Updated: 2020/07/13 15:47:28 by soseroal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
	write(1, &c, 1) ;
}

void ft_is_negative(int n)
{
	if ( n < 0 ) 
	{
		ft_putchar('N') ;
	}
	else  
	{
		ft_putchar('P') ;
	}
}


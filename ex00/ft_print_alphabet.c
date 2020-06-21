/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:36:49 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/21 16:15:06 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fr_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putchar_alphabet(void)
{
	char ch;

	ch = 'a'
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch++
		}
}
int 	main()
{
	ft_print_alphabet();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:15:15 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/23 11:42:24 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c)

{
	write(1, &c, 1);

}
void 	ft_print_reverse_alphabet(void)
{
	char ch;

	ch = 'z';
 	while (ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
}
int main ()
{
	ft_print_reverse_alphabet();
	return 0;
}

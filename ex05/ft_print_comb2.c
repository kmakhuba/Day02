/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:51:14 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/23 16:03:10 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar (char c)
{
	write(1, &c, 1);
}
int		ft_print_putchar(char c);

void	ft_print_2_digits_number(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int b;

	a = 00;
	b = 00;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_2_digits_number(a, b);
			b++;
		}
		a++;
	}
}
int main ()

{
	ft_print_comb2();
	return 0;
}


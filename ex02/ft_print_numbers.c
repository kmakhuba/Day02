/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:56:01 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/23 12:21:30 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char number)
{
	write(1, &number, 1);

	return 0;
}

void ft_print_numbers(void)
{
  	int number = '0';
	while(number <= '9')
	{
		ft_putchar(number);
			number++;
	}
}
int main()
{
	ft_print_numbers();

	return 0;
}
	

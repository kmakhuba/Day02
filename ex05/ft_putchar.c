/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:00:35 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/23 16:00:40 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_putchar (char c)
{
	write(1, &c, 1);
}

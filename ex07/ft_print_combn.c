/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:40:12 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/23 16:42:09 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)

void ft_print_comb(void)
{
    int a, b, c;
    a = b = c = 0;
    while(a < 8) {
       while(b < 9) {
            while(c < 10) {
                if (a != b && b != c && a != c){
                    ft_putchar(a +'0');
                    ft_putchar(b +'0');
                    ft_putchar(c +'0');
                    if (a != 7) {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                c++;
            }
           c = b+1;
           b++;
        }
        b = a+1;
        a++;
    }
}

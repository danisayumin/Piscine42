/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:22:47 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/03/17 12:09:10 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;
	int	a;

	i = 0;
	a = size / 2;
	size = size - 1;
	while (i != a)
	{
		store = tab[i];
		tab[i] = tab[size];
		tab[size] = store;
		i++;
		size--;
	}
}

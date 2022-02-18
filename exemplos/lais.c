/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lais.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:49:30 by asoler            #+#    #+#             */
/*   Updated: 2022/02/05 18:26:58 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	lais(void)
{
	char index;
	int l;
	char q;

	index = 'a';
	q = 10;

	
	while (index <= 70)
	{
		// write(1, &q, 1);
		l = (index - 3);
		printf("%d", l);
		printf("%c", q);
		index = index + 7;
	}
}

int	main(void)
{
	lais();
}

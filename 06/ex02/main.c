/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:51:34 by asoler            #+#    #+#             */
/*   Updated: 2022/02/18 22:51:58 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_params(char *string);

int	main(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_rev_params(argv[argc - 1]);
		argc--;
	}
}

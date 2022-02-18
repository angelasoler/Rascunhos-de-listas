/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:50:05 by asoler            #+#    #+#             */
/*   Updated: 2022/02/18 22:50:32 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_params(char *string);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > 1)
	{
		ft_print_params(argv[i]);
		argc--;
		i++;
	}
}

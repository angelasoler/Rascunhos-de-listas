/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:48:11 by asoler            #+#    #+#             */
/*   Updated: 2022/02/18 22:48:59 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_program_name(char *string);

int	main(int argc, char *argv[])
{
	ft_print_program_name(argv[argc - 1]);
}

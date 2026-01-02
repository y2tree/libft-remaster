/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprtcmb_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:15:33 by wcorrea-          #+#    #+#             */
/*   Updated: 2026/01/02 13:29:29 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char fst, char snd, char trd)
{
	write(1, &fst, 1);
	write(1, &snd, 1);
	write(1, &trd, 1);

	//If not the numbers 789 the comma is printed
	if (!(fst == '7' && snd == '8' && trd == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	trd;

	// The numbers won't be repeated because
	// they are the sum of the previous plus one
	fst = '0';
	while (fst <= '7')
	{
		snd = fst + 1;
		while (snd <= '8')
		{
			trd = snd + 1;
			while (trd <= '9')
			{	
				//Send the numbers to be printed
				ft_print(fst, snd, trd);
				trd++;
			}
			snd++;
		}
		fst++;
	}
}
/* 
int	main(void)
{
	ft_print_comb();
} */
int main() {
    ft_print_comb();
  
}
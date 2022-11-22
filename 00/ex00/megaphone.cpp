/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 10:44:40 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 10:52:46 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int j = 1; argv[j]; j++)
	{
		for(int i = 0; argv[j][i]; i++)
		{
			if (isalpha(argv[j][i]))
				argv[j][i] = toupper(argv[j][i]);
		}
		std::cout << argv[j];
	}
	std::cout << std::endl;
	return (1);
}

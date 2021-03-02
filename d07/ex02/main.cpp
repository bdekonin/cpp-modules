/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:59:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/02/19 14:59:06 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> test(10);
	unsigned int size = test.size();

	std::cout << "test size: " << size << std::endl;
	for (unsigned int i = 0; i < size; i++)
		test[i] = static_cast<int>(size) - static_cast<int>(i);
	for (unsigned int i = 0; i < size; i++)
		std::cout << "test[" << i << "] = " << test[i] << std::endl;

	Array<int> test1;

	std::cout << std::endl << "test1 size: " << test1.size() << std::endl;

	return 0;
}
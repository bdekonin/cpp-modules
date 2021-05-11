/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:59:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 17:53:05 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int> arr(10);

	for (int i = 0; i < (int)arr.size(); i++)
		arr[i] = i + i;

	Array<int> arrDup = arr;
	for (int i = 0; i < (int)arrDup.size(); i++)
		arrDup[i] = 0;
		
	for (int i = 0; i < (int)arr.size(); i++)
		std::cout << "(arr)\t [" << i << "] " << arr[i] << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < (int)arrDup.size(); i++)
		std::cout << "(arrDup) [" << i << "] " << arrDup[i] << std::endl;
		
	return 0;
}
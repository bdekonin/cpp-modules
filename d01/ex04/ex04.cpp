/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 15:27:43 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 15:35:21 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		&ref = str;
	std::string		*ptr = &str;

	std::cout << "String   : " << str << std::endl;
	std::cout << "Reference: '" << ref << "'" << std::endl;
	std::cout << "Pointer  : '" << ptr << "'" << std::endl;
}
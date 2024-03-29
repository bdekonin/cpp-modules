/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:34:11 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 16:31:34 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(void)
{
	std::string string("HI THIS IS BRAIN");
	
	// Pointer to the string
	std::string *stringPTR = &string;

	// Reference to the string
	std::string &stringREF = string;

	// Printing the address of the string
	std::cout << "Address of string:    " << &string << std::endl;
	std::cout << "Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;

	// Printing the value of the string
	std::cout << "Value of string:      " << string << std::endl;
	std::cout << "Value of stringPTR:   " << *stringPTR << std::endl;
	std::cout << "Value of stringREF:   " << stringREF << std::endl;
}
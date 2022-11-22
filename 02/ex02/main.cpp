/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 16:50:17 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/23 11:25:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::min( a, b ) << std::endl; // min const member function called
	std::cout << Fixed::max( a, b ) << std::endl; // max const member function called

	std::cout << Fixed::min( a, a ) << std::endl; // min member function called


	std::cout << Fixed(b) / Fixed(2) << std::endl; // should print: 5.05078
	return 0;
}

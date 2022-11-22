/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:08:35 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/02 21:30:20 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void print_array(T const &data)
{
	std::cout << data << std::endl;
}

template<typename T>
void iter(T *p, size_t length, void (*func)(T &))
{
	for (size_t i = 0; i < length; i++)
		(*func)(p[i]);
}
template<typename T>
void iter(T *p, size_t length, void (*func)(T const &))
{
	for (size_t i = 0; i < length; i++)
		(*func)(p[i]);
}

#endif // ITER_HPP
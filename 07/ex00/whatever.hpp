/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/28 13:44:52 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/02 11:49:50 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T c;

    c = a;
    a = b;
    b = c;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif // WHATEVER_HPP
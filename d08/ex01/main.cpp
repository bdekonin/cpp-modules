/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/04 12:23:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/07 12:01:55 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <list>

#define MAX 12

int main()
{
    std::srand(unsigned(std::time(nullptr)));
    std::vector<int> v(MAX);
    std::generate(v.begin(), v.end(), std::rand);

    Span span(MAX);
    Span spany(MAX);
    
    span.addNumber(v.begin(), v.end());
    spany.addNumber(v);

    span.print();
    spany.print();
    
}
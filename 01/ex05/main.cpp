/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 14:49:56 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 14:50:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;

	karen.complain("info");
	karen.complain("debug");
	karen.complain("warning");
	karen.complain("error");
	karen.complain("456a5d56afds");
	karen.complain("");

	return (0);
}
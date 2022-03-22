/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/21 17:39:52 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/22 17:13:18 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat *b = new Bureaucrat("Federico",50);
		Form *f = new Form("form",100,100);
		b->signForm(*f);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 11:19:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/31 18:40:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal **pets = new const Animal*[4];

	pets[0] = new Dog();
	pets[1] = new Dog();
	pets[2] = new Cat();
	pets[3] = new Cat();

    Cat cat;
    Cat copycat(cat);
    Dog dog;
    Dog copydog(dog);
    std::cout << "**test"<< std::endl;
    std::cout << cat.getBrain() << std::endl;
    std::cout << copycat.getBrain() << std::endl;
    std::cout << dog.getBrain() << std::endl;
    std::cout << copydog.getBrain() << std::endl;

	delete pets[0];
	delete pets[1];
	delete pets[2];
	delete pets[3];
	system("leaks a.out");
}
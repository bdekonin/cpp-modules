/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 11:19:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 19:05:55 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal * animals[100];

	for (int i = 0; i < 50; i++)
		animals[i] = new Dog();
	for (int i = 50 ; i < 100; i++)
		animals[i] = new Cat();

    for (int i = 0; i < 100; i++)
        animals[i]->makeSound();
        
    for (int i = 0; i < 100; i++)
        delete animals[i];
    
    std::cout << std::endl;
    
    Cat basic;
	Cat tmp = basic;

    std::cout << std::endl;

    // const Animal* j = new Animal; // Doesn't work because of the protected constructor
    // delete j;
    
    // const Animal* i = new Cat(); // Works because of the public constructor
    // delete i;


    system("leaks a.out");
}
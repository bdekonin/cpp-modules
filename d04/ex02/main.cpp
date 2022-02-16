/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 11:19:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/16 11:48:59 by bdekonin      ########   odam.nl         */
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

    for (int i = 0; i < 100; i += 2) {
        animals[i] = new Dog();
        animals[i + 1] = new Cat();
    }

    for (int i = 0; i < 100; i++)
        animals[i]->makeSound();
        
    for (int i = 0; i < 100; i++)
        delete animals[i];
    
    std::cout << std::endl;
    
    Cat basic;
	Cat tmp = basic;

    std::cout << std::endl;
    system("leaks a.out");
}
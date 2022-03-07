/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 13:17:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/07 10:45:46 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* https://stackoverflow.com/questions/573294/when-to-use-reinterpret-cast */

#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data		data;

	data.num = 8;

	uintptr_t	serializePointer = serialize(&data);
	Data		*deserializePointer = deserialize(serializePointer);
	
	std::cout << "serializePointer:   0x" << std::hex << serializePointer << " - " << data.num << std::endl;
	std::cout << "deserializePointer: " << deserializePointer << " - " << deserializePointer->num << std::endl;
	return (0);
}

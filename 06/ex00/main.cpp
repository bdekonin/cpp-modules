/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 15:38:55 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/01 12:30:44 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define NONDISPLAYABLE "Non displayable"
#define IMPOSSIBLE "impossible"

char toChar(std::string &argument)
{
	int	result = 0;

	try
	{
		if (argument.length() == 1 && !isdigit(argument[0]))
			result += argument[0];
		else
			result = std::stoi(argument);
		return (static_cast<char>(result));
	}
	catch (const std::exception &e)
	{
		throw (std::exception());
	}
}
int toInt(std::string &argument)
{
	int	result = 0;

	try
	{
		if (argument.length() == 1 && !isdigit(argument[0]))
			result += argument[0];
		else
			result = std::stoi(argument);
		return (static_cast<int>(result));
	}
	catch (const std::exception &e)
	{
		throw (std::exception());
	}
}
float toFloat(std::string &argument)
{
	float	result = 0.0f;

	try
	{
		if (argument.length() == 1 && !isdigit(argument[0]))
			result += argument[0];
		else
			result = std::stof(argument);
		return (static_cast<float>(result));
	}
	catch (const std::exception &e)
	{
		throw (std::exception());
	}
}
double toDouble(std::string &argument)
{
	double	result = 0.0;

	try
	{
		if (argument.length() == 1 && !isdigit(argument[0]))
			result += argument[0];
		else
			result = std::stod(argument);
		return (static_cast<double>(result));
	}
	catch (const std::exception &e)
	{
		throw (std::exception());
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Programs takes 1 argument" << std::endl;
		return (0);
	}
	std::string argument = argv[1];

	if (argument == "-inf" || argument == "-inff")
	{
		std::cout << "char: " << IMPOSSIBLE << std::endl;
		std::cout << "int: " << IMPOSSIBLE << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
		return (0);
	}
	if (argument == "+inf" || argument == "+inff")
	{
		std::cout << "char: " << IMPOSSIBLE << std::endl;
		std::cout << "int: " << IMPOSSIBLE << std::endl;
		std::cout << "float: " << "+inff" << std::endl;
		std::cout << "double: " << "+inf" << std::endl;
		return (0);
	}
	if (argument == "nan" || argument == "nanf")
	{
		std::cout << "char: " << IMPOSSIBLE << std::endl;
		std::cout << "int: " << IMPOSSIBLE << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return (0);
	}

	/* ************************************************************************** */
	std::cout << "char: ";
	try
	{
		char res = toChar(argument);

		if (res >= 33 && res <= 126) // checks if character is printable
			std::cout << "'" << res << "'" << std::endl;
		else if (res == 127 || (res >= -128 && res < 33)) // checks if character is not printable
			std::cout << NONDISPLAYABLE << std::endl;
		else // conversion is non possible
			std::cout << IMPOSSIBLE << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << IMPOSSIBLE << '\n';
	}
	/* ************************************************************************** */
	std::cout << "int: ";
	try
	{
		int res = toInt(argument);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << IMPOSSIBLE << '\n';
	}
	/* ************************************************************************** */
	std::cout << "float: ";
	try
	{
		float res = toFloat(argument);
		// std::cout << "gert: " << std::to_string(res) << std::endl;
		if (std::to_string(res).find('.') != std::string::npos)
			std::cout << std::fixed << std::setprecision(1) << res << "f" << std::endl;
		else
			std::cout << res << ".0" << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << IMPOSSIBLE << '\n';
	}
	/* ************************************************************************** */
	std::cout << "double: ";
	try
	{
		double res = toDouble(argument);
		
		// check if there is a . in the string
		if (std::to_string(res).find('.') != std::string::npos)
			std::cout << std::fixed << std::setprecision(1) << res << std::endl;
		else
			std::cout << res << ".0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << IMPOSSIBLE << '\n';
	}
	/* ************************************************************************** */
	return (1);
}
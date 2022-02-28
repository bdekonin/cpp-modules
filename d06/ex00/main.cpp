/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/23 15:38:55 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/28 14:01:48 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define NONDISPLAYABLE "Non displayable"
#define IMPOSSIBLE "impossible"
#define DIGITS "1234567890"

# define INT 0
# define FLOAT 1
# define DOUBLE 2
# define CHAR 3
# define MINUS_INF 4
# define PLUS_INF 5
# define NAN 6
# define NONE 7

int getConversion(std::string& argument)
{
	/* Check if argument is any of these values */
	if (argument == "-inf" || argument == "-inff")
		return (MINUS_INF);
	if (argument == "+inf" || argument == "+inff")
		return (PLUS_INF);
	if (argument == "nan" || argument == "nanf")
		return (NAN);

	/* Check if argument is a single number or a character */
	if (argument.length() == 1)
	{
		if (isdigit(argument[0]))
			return (INT);
		return (CHAR);
	}

	/* Check if number is a negative or positive number */
	int i = 0;
	if (argument[i] == '-' || argument[i] == '+')
		i++;

	/* Check if argument is a number with decimals */
	while (isdigit(argument[i]))
		i++;
	if (i == (int)argument.length())
		return (INT);
	if (argument[i] != '.')
		return (NONE);

	i++; /* Skip the '.' */

	/* Check if argument is a number with decimals and an 'f' */
	while (isdigit(argument[i]))
		i++;
	if (i == (int)argument.length())
	{
		argument.push_back('0'); /* Add a '0' to the end of the string when string is '12.' */
		return (DOUBLE);
	}
	if (argument[i] != 'f')
		return (NONE);
	
	/* String is a Float */
	return (FLOAT);
}

char toChar(std::string &argument)
{
	int	result = 0;

	try
	{
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
	// int ret = getConversion(argument);

	std::cout << "char: ";
	try
	{
		char	res = toChar(argument);

		if (res >= 33 && res <= 126) // checks if character is printable
			std::cout << "'" << res << "'" << std::endl;
		else if (res == 127 || (res >= -128 && res < 33)) // checks if character is not printable
			std::cout << NONDISPLAYABLE << std::endl;
		else // conversion is non possible
			std::cout << IMPOSSIBLE << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "int: ";
	try
	{
		int res = toInt(argument);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "float: ";
	try
	{
		float res = toFloat(argument);
		std::cout << res << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "double: ";
	try
	{
		double res = toDouble(argument);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (1);
}
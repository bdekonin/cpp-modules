/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 12:14:51 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 12:17:46 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>

Account::Account(void) {}
Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_displayTimestamp();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += this->_amount;
	_nbAccounts++;
}
/* First Constructed, last destructed
** Source
** https://stackoverflow.com/questions/31246000/why-destructors-are-not-called-in-reverse-order-for-array-of-objects/31246215
** https://isocpp.org/wiki/faq/dtors#order-dtors-for-arrays
*/
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
	this->_accountIndex = _nbAccounts;
	_nbAccounts--;
	_totalAmount -= this->_amount;
}

//getters
int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

//displays
void Account::displayAccountsInfos(void)
{	
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}
void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
  	std::tm *const TimeInfo = std::localtime(&t);

	std::cout
		<<"["
		<< 1900 + TimeInfo->tm_year
		<< 01 + TimeInfo->tm_mon
		<< TimeInfo->tm_mday
		<< "_"
		<< TimeInfo->tm_hour
		<< TimeInfo->tm_min
		<< TimeInfo->tm_sec
		<< "] ";
}

//operations
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_nbDeposits++;
	if (deposit != 0)
	{
		Account::_totalNbDeposits++;
		this->_amount += deposit;
	}
	std::cout 
			<< "amount:" << this->_amount << ";"
			<< "nb_deposits:" << this->_nbDeposits
			<< std::endl;
	Account::_totalAmount += deposit;
}

int Account::checkAmount(void) const 
{
	return (this->_amount);
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout 
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
	}
	std::cout
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

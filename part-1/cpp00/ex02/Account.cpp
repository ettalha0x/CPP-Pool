/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:21:23 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/04 22:55:42 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
              << ";amount:" << "\033[34m" << _amount << "\033[0m"
              << ";created"
              << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
			  << ";amount:" << "\033[34m" << _amount << "\033[0m"
			  << ";closed" 
			  << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
			  << ";p_amount:" << "\033[34m" << _amount << "\033[0m"
			  << ";deposit:" << "\033[34m" << deposit << "\033[0m"
			  << ";amount:" << "\033[34m" << _amount + deposit << "\033[0m"
			  << ";nb_deposits:" << "\033[34m" << _nbDeposits + 1 << "\033[0m"
			  << std::endl;

	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	if (_amount >= withdrawal)
	{
		std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
				  << ";p_amount:" << "\033[34m" << _amount << "\033[0m"
				  << ";withdrawal:" << "\033[34m" << withdrawal << "\033[0m"
				  << ";amount:" << "\033[34m" << _amount - withdrawal << "\033[0m"
				  << ";nb_withdrawals:" << "\033[34m" << _nbWithdrawals + 1 << "\033[0m"
				  << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return true;
	}
	else
	{
		std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
				  << ";p_amount:" << "\033[34m" << _amount << "\033[0m"
				  << ";withdrawal:" << "refused" 
				  << std::endl;
		return false;
	}
}

int Account::checkAmount() const
{
	return _amount;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
			  << ";amount:" << "\033[34m" << _amount << "\033[0m"
			  << ";deposits:" << "\033[34m" << _nbDeposits << "\033[0m"
			  << ";withdrawals:" << "\033[34m" << _nbWithdrawals << "\033[0m"
			  << std::endl;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << "\033[34m" << _nbAccounts << "\033[0m" 
			  << ";total:" << "\033[34m" << _totalAmount << "\033[0m" 
			  << ";deposits:" << "\033[34m" << _totalNbDeposits << "\033[0m" 
			  << ";withdrawals:" << "\033[34m" << _totalNbWithdrawals << "\033[0m" 
			  << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t timestamp;
    char timestampStr[16];

	timestamp = std::time(nullptr);
    std::strftime(timestampStr, sizeof(timestampStr), "%Y%m%d_%H%M%S", std::localtime(&timestamp));
    std::cout << "[" << timestampStr << "] ";
}

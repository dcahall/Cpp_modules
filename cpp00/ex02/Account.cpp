/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:45:26 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/06 13:38:30 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit){
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	_nbAccounts += 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void){
	time_t		rawTime;
	struct tm	*timeInfo;
	char		buffer[40];

	time(&rawTime);
	timeInfo = localtime(&rawTime);

	strftime(buffer, 40, "[%Y%m%d_%H%M%S]", timeInfo);
	std::cout << buffer;
}

int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}

int	Account::checkAmount(void) const{
	return (_amount);
}

void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	
	std::cout << " index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
	_nbDeposits += 1;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";withdrawal:";
	if (withdrawal <= _amount)
	{
		std::cout << withdrawal << ";amount:" << _amount - withdrawal;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	return (true);
}
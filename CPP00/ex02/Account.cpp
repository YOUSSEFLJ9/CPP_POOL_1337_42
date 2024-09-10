/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:13:34 by ymomen            #+#    #+#             */
/*   Updated: 2024/09/10 09:51:51 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
#include <ctime>

int  Account::_nbAccounts  = 0;
int  Account::_totalAmount = 0;
int	 Account:: _totalNbDeposits = 0;
int	 Account::_totalNbWithdrawals = 0;
 
Account::Account( int initial_deposit )
{
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    static int i = 0;
    std::cout << "index:" << i % Account ::_nbAccounts << ";amount:" << _amount << ";closed" << std::endl;
    i++;
}

int	Account::getNbAccounts( void )
 {
        return (_nbAccounts);
 }

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    _displayTimestamp();
    std :: cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit  << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
    _totalNbDeposits++;
    _totalAmount += deposit;
    this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    return (true);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    
}

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    
    std::cout<< "[" << now->tm_year + 1900 << now->tm_mon + 1 << now->tm_mday << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] ";
       
}
 

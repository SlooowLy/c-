#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

bool	Account::makeWithdrawal( int withdrawal )
{
	int	done;

	if (this->_amount - withdrawal > -1)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1;
		this->_totalAmount -= withdrawal;
		done = 1;
	}
	else
		done = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:";
	if (done)
		std::cout << this->_amount + withdrawal << ";withdrawal:";
	else
	{
		std::cout << this->_amount << ";withdrawal:refused" << std::endl;
		return 0;
	}
	std::cout << withdrawal
			  << ";amount:" << this->_amount
			  << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return 1;
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount - deposit
			  << ";deposit:" << deposit
			  << ";amount:" << this->_amount
			  << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
			  <<";deposits:" << Account::_totalNbDeposits << ";withdrawals:"
			  << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex
			  << ";amount:" << Account::_amount
			  << ";deposits:" << Account::_nbDeposits
			  << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}


void	check_0(int i)
{
	if (i < 10)
		std::cout << '0';
	std::cout << i;
}

void Account::_displayTimestamp(void)
{
	struct tm *time;
	const std::time_t now = std::time(0);
	time = std::gmtime(&now);
	std::cout << "[" << time->tm_year + 1900;
	check_0(time->tm_mon);
	check_0(time->tm_mday);
	std::cout << "_";
	check_0(time->tm_hour);
	check_0(time->tm_min);
	check_0(time->tm_sec);
	std::cout << "] ";
}

Account::Account(int init)
{
	this->_amount = init;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;
	this->_totalAmount += init;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << init << ";created" << std::endl;
}
Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";closed" << std::endl;

}
#include "Account.hpp"
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";amount:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit )
{
	_displayTimestamp();
	_nbAccounts += 1;
	_totalNbDeposits += 1;
	_totalAmount += initial_deposit;

	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_totalNbDeposits += 1;
	_totalAmount += deposit;

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";";
	_nbDeposits += 1;
	_amount += deposit;
	std::cout << "amount:" << _amount << ";nb_deposits:"<< _nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

		_amount -= withdrawal;
		_nbWithdrawals += 1;

		std::cout << withdrawal << ";amount" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	std::cout << "Checking Amount??"<<std::endl;
	return _amount;
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" <<_amount << ";deposits:" << _nbDeposits 
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
void	Account::_displayTimestamp( void )
{
	tm	*tm_time;
	time_t now = time(0);
	tm_time = localtime(&now);
	std::cout << "[" << tm_time->tm_year + 1900;
	if (tm_time->tm_mon < 10)
		std::cout << "0";
	std::cout << tm_time->tm_mon;
	if (tm_time->tm_mday < 10)
		std::cout << "0";
	std::cout << tm_time->tm_mday << "_";
	if (tm_time->tm_hour < 10)
		std::cout << "0";
	std::cout << tm_time->tm_hour;
	if (tm_time->tm_min < 10)
		std::cout << "0";
	std::cout << tm_time->tm_min;
	if (tm_time->tm_sec < 10)
		std::cout << "0";
	std::cout << tm_time->tm_sec;
	std::cout << "] ";

}
Account::Account(void){}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
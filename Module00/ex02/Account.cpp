#include "Account.hpp"

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
	std::cout << "Accounts infos:" << std::endl;
	std::cout << "accounts: " << _nbAccounts << std::endl;
	std::cout << "total amount: " << _totalAmount << std::endl;
	std::cout << "number of deposits: " << _totalNbDeposits << std::endl;
	std::cout << "number of withdrawals: " << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit )
{
	_nbAccounts += 1;
	_totalNbDeposits += 1;
	_totalAmount += initial_deposit;

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 1;
}

void	Account::makeDeposit( int deposit )
{
	_totalNbDeposits += 1;
	_totalAmount += deposit;

	_nbDeposits += 1;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
	{
		std::cout << "Error: withdrawal refused." << std::endl;
		return false;
	}
	else
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;

		_amount -= withdrawal;
		_nbWithdrawals += 1;

		return true;
	}
}

int		Account::checkAmount( void ) const
{
	return 1;
}
void	Account::displayStatus( void ) const
{

}
void	Account::_displayTimestamp( void )
{

}
Account::Account(void){}

Account::~Account(void){}
#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";created\n";
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";closed\n";
}

void Account::makeDeposit(int deposit) {
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	std::cout << this->_amount << ";nb_deposits:"
			<< this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	else
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

int Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp() {
	time_t t = time(NULL);
	tm* now = localtime(&t);
	std::cout << std::put_time(now, "[%Y%m%d_%H%M%S] ");
}

int Account::checkAmount() const {
	return (1);
}

Account::Account() {

}

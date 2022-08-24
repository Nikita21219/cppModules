# include <iostream>
# include "Account.hpp"
#include <chrono>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_amount = initial_deposit;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account() {
    Account::_displayTimestamp();
    std::cout <<
    "index:" <<
    Account::_accountIndex <<
    ";amount:" <<
    Account::_amount <<
    ";closed";
    if (Account::_nbAccounts-- != 1)
        std::cout << std::endl;
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout <<
    "index:" <<
    Account::_accountIndex <<
    ";amount:" <<
    Account::_amount <<
    ";deposits:" <<
    Account::_nbDeposits <<
    ";withdrawals:" <<
    Account::_nbWithdrawals <<
    std::endl;
}

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout <<
    "accounts:" <<
    Account::_nbAccounts <<
    ";total:" <<
    Account::getTotalAmount() <<
    ";deposits:" <<
    Account::getNbDeposits() <<
    ";withdrawals:" <<
    Account::getNbWithdrawals() <<
    std::endl;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}

void Account::makeDeposit(int deposit) {
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;

    Account::_displayTimestamp();
    std::cout <<
    "index:" <<
    Account::_accountIndex <<
    ";p_amount:" <<
    Account::_amount <<
    ";deposit:" <<
    deposit <<
    ";amount:" <<
    Account::_amount + deposit <<
    ";nb_deposits:" <<
    Account::_nbDeposits <<
    std::endl;
    
    Account::_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout <<
    "index:" <<
    Account::_accountIndex <<
    ";p_amount:" <<
    Account::_amount <<
    ";withdrawal:";

    if (Account::_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    Account::_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    int new_amount = Account::_amount - withdrawal;
    std::cout <<
    withdrawal <<
    ";amount:" <<
    new_amount <<
    ";nb_withdrawals:" <<
    Account::_nbWithdrawals <<
    std::endl;
    Account::_amount = new_amount;
    return true;
}

void Account::_displayTimestamp(void) {
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";    
}

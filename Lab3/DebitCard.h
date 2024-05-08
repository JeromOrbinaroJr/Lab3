#pragma once
#include <string>
#include "BankCard.h"

class DebitCard : public BankCard {
public:
	//Constructor
	DebitCard();
	DebitCard(const std::string& namePaymentSys);
	
	//Destructor
	~DebitCard();

	//Getters
	std::string getNamePaymentSys() const;
	int64_t getWithdrawalOwnerNumber() const;

	//Setters
	void setNamePaymentSys(const std::string& namePaymentSys);

	//Methods
	void createDebitCard(BankCard& bankCard);
	void depositMoney(int64_t numberOwner, int64_t amount); // функция: положить деньги
	void withdrawMoney(	int64_t numberOwner, int64_t amount); // функция: снять деньги
private:
	std::string m_namePaymentSys;
	int64_t m_withdrawalOwnerNumber;
};

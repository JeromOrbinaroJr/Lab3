#pragma once
#include <string>
#include <iostream>
#include "BankCard.h"

class DebitCard : public BankCard {
public:
	//Constructor
	DebitCard();
	DebitCard(const std::string& namePaymentSys);
	DebitCard(const BankCard& bankCard);
	
	//Destructor
	~DebitCard();//override

	//Getters
	std::string getNamePaymentSys() const;
	std::string getWithdrawalOwnerNumber() const;

	//Setters
	void setNamePaymentSys(const std::string& namePaymentSys);

	//Operator Overloading
	friend std::ostream& operator<<(std::ostream& os, const DebitCard& card);

	//Methods
	//void createDebitCard(const BankCard& bankCard);
	void depositMoney(int amount); // функция: положить деньги
	void withdrawMoney(int amount); // функция: снять деньги
private:
	std::string m_namePaymentSys;
	std::string m_withdrawalOwnerNumber;
};

#pragma once
#include <string>
#include "BankCard.h"
#include "CardStructure.h"

class DebitCard : public BankCard {
public:
	//Constructor
	DebitCard();
	DebitCard(const std::string& namePaymentSys);
	
	//Destructor
	~DebitCard();

	//Getters
	std::string getNamePaymentSys() const;

	//Setters
	void setNamePaymentSys(const std::string& namePaymentSys);

	//Methods
	void createDebitCard(BankCard& bankCard);
	void withdrawMoney(std::vector<BankCard>& cards, int64_t numberOwner, int64_t amount);
	void depositMoney(int64_t numberOwner, int64_t amount);

private:
	std::string m_namePaymentSys;
};

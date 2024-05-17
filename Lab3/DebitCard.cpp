#include "DebitCard.h"

//Constructor
DebitCard::DebitCard() {}
DebitCard::DebitCard(const std::string& namePaymentSys) :
	m_namePaymentSys(namePaymentSys) {}

//Destructor
DebitCard::~DebitCard() {}

//Getters
std::string DebitCard::getNamePaymentSys() const { return m_namePaymentSys; }
std::string DebitCard::getWithdrawalOwnerNumber() const { return m_withdrawalOwnerNumber; }

//Setters
void DebitCard::setNamePaymentSys(const std::string& namePaymentSys) { this->m_namePaymentSys = namePaymentSys; }

//Operator Overloading 
std::ostream& operator<<(std::ostream& os, const DebitCard& card) {
    std::cout << "Information of Debit Card:" << std::endl;
    os << "Payment System Card: " << card.getNamePaymentSys() << std::endl;
    os << "Card name: " << card.getNameCard() << std::endl;
    os << "Card number: " << card.getNumberCard() << std::endl;
    os << "Validity period card: " << card.getValidityPeriod() << std::endl;
    os << "Surname owner of card: " << card.getSurnameOwner() << std::endl;
    os << "Name owner of card: " << card.getNameOwner() << std::endl;
    os << "Patronomyc owner of card: " << card.getPatronomycOwner() << std::endl;
    os << "Number owner: " << card.getNumberOwner() << std::endl;
    os << "Score of card: " << card.getScoreCard() << std::endl;
    return os;
}

//Methods
void DebitCard::createDebitCard(const BankCard& bankCard) {
    setNameCard(bankCard.getNameCard());
    setNumberCard(bankCard.getNumberCard());
    setValidityPeriod(bankCard.getValidityPeriod());
    setSurnameOwner(bankCard.getSurnameOwner());
    setNameOwner(bankCard.getNameOwner());
    setPatronymicOwner(bankCard.getPatronomycOwner());
    setNumberOwner(bankCard.getNumberOwner());
    setScoreCard(bankCard.getScoreCard());
}

void DebitCard::depositMoney(int amount) {
    setScoreCard(getScoreCard() + amount);
    std::cout << "Deposit successful by number: " << getNumberOwner() << ". New balance: " << getScoreCard() << std::endl;
}

void DebitCard::withdrawMoney(int amount) {
    try {
        if (amount > getScoreCard()) { throw amount; }
        m_withdrawalOwnerNumber = getNumberOwner();
        setScoreCard(getScoreCard() - amount);
        std::cout << "The withdrawal was successful by number: "<< getNumberOwner() << ". New balance: " << getScoreCard() << std::endl;
    }
    catch (int amount) {
        std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
    }
}
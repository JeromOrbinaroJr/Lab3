#include "DebitCard.h"

// Constructor
DebitCard::DebitCard(const std::string& namePaymentSys)
    : m_namePaymentSys(namePaymentSys) {}

DebitCard::DebitCard(const BankCard& bankCard)
    : BankCard(bankCard) {}

// Destructor
DebitCard::~DebitCard() {}

// Getters
const std::string& DebitCard::getNamePaymentSys() const { return m_namePaymentSys; }
const std::string& DebitCard::getWithdrawalOwnerNumber() const { return m_withdrawalOwnerNumber; }

// Setters
void DebitCard::setNamePaymentSys(const std::string& namePaymentSys) { m_namePaymentSys = namePaymentSys; }

// Operator Overloading
std::ostream& operator<<(std::ostream& os, const DebitCard& card) {
    os << "Debit Card Information:\n"
        << "Payment System: " << card.m_namePaymentSys << "\n"
        << "Card Number: " << card.getNumberCard() << "\n"
        << "Card Holder Name: " << card.getNameOwner() << std::endl;
        std::ostringstream oss;
        oss << std::put_time(&card.getValidityPeriod(), "%d-%m-%Y");
        os << "Expiration Date: " << oss.str() << std::endl;
    return os;
}

// Methods
void DebitCard::depositMoney(int amount) {
    if (amount <= 0) { throw std::invalid_argument("Invalid deposit amount."); }
    setScoreCard(getScoreCard() + amount);
}

void DebitCard::withdrawMoney(int amount) {
    if (amount <= 0) { throw std::invalid_argument("Invalid withdrawal amount."); }
    if (amount > getScoreCard()) { throw std::runtime_error("Insufficient funds."); }
    setScoreCard(getScoreCard() - amount);
}

#include "DebitCard.h"

//Constructor
DebitCard::DebitCard() {}
DebitCard::DebitCard(const std::string& namePaymentSys) :
	m_namePaymentSys(namePaymentSys) {}

//Destructor
DebitCard::~DebitCard() {}

//Getters
std::string DebitCard::getNamePaymentSys() const { return m_namePaymentSys; }
int64_t DebitCard::getWithdrawalOwnerNumber() const { return m_withdrawalOwnerNumber; }

//Setters
void DebitCard::setNamePaymentSys(const std::string& namePaymentSys) { this->m_namePaymentSys = namePaymentSys; }

//Methods
void DebitCard::createDebitCard(BankCard& bankCard) {
    setNameCard(bankCard.getNameCard());
    setNumberCard(bankCard.getNumberCard());
    setValidityPeriod(bankCard.getValidityPeriod());
    setSurnameOwner(bankCard.getSurnameOwner());
    setNameOwner(bankCard.getNameOwner());
    setPatronymicOwner(bankCard.getPatronomycOwner());
    setNumberOwner(bankCard.getNumberOwner());
    setScoreCard(bankCard.getScoreCard());
}

void DebitCard::depositMoney(int64_t numberOwner, int64_t amount) {
    setScoreCard(getScoreCard() + amount);
    std::cout << "Deposit successful. New balance: " << getScoreCard() << std::endl;
}

void DebitCard::withdrawMoney(int64_t numberOwner, int64_t amount) {
    try {
        if (amount > getScoreCard()) {
            throw amount;
        }
        m_withdrawalOwnerNumber = numberOwner;
        setScoreCard(getScoreCard() - amount);
        std::cout << "Withdrawal successful. New balance: " << getScoreCard() << std::endl;
    }
    catch (int64_t amount) {
        std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
    }
}


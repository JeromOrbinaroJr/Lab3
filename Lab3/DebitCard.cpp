#include "DebitCard.h"

//Constructor
DebitCard::DebitCard() {}
DebitCard::DebitCard(const std::string& namePaymentSys) :
	m_namePaymentSys(namePaymentSys) {}

//Destructor
DebitCard::~DebitCard() {}

//Getters
std::string DebitCard::getNamePaymentSys() const { return m_namePaymentSys; }

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

void DebitCard::withdrawMoney(int64_t numberOwner, int64_t amount) {
    try {
        if (amount > getScoreCard()) { throw amount; }
        setScoreCard(getScoreCard() - amount);
        std::cout << "Withdrawal successful. New balance: " << getScoreCard() << std::endl;
    }
    catch (int64_t amount) {
        std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
    }
}

void withdrawMoneyByOwnerNumber(std::vector<BankCard>& cards, int64_t ownerNumber, int64_t amount) {
    for (auto& card : cards) {
        if (card.getNumberOwner() == ownerNumber) {
            try {
                if (amount > card.getScoreCard()) { throw amount; }
                card.setScoreCard(card.getScoreCard() - amount);
                std::cout << "Withdrawal successful. New balance: " << card.getScoreCard() << std::endl;
            }
            catch (int64_t amount) {
                std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
            }
        }
    }
    std::cout << "Card with owner number " << ownerNumber << " not found." << std::endl;
}


void DebitCard::depositMoney(int64_t numberOwner, int64_t amount) {
    setScoreCard(getScoreCard() + amount);
    std::cout << "Deposit successful. New balance: " << getScoreCard() << std::endl;
}
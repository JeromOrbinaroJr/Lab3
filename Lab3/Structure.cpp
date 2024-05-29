#include "Structure.h"

void BankCardStructure::addCard(BankCard&& card) {//rvalue, std::move, emplace_back
    cards.emplace_back(std::move(card));
}

const std::vector<BankCard>& BankCardStructure::getAllCards() const {
    return cards;
}

//const std::string& BankCardStructure::getValidityPeriodByOwnerNumber(std::string ownerNumber) const {
//    for (const auto& card : cards) {//auto, std::find_if
//        if (card.getNumberOwner() == ownerNumber) {
//            return card.getValidityPeriod();
//        }
//    }
//    return "There is no such client."; //std::optional
//}

const std::tm& BankCardStructure::getValidityPeriodByOwnerNumber(std::string ownerNumber) const {
    static std::tm nullDate{}; 

    for (const auto& card : cards) {
        if (card.getNumberOwner() == ownerNumber) {
            return card.getValidityPeriod();
        }
    }
    return nullDate;
}

void BankCardStructure::sameNames(const BankCard& firstCard, const BankCard& secondCard) {
    const std::string& nameFirstCard = firstCard.getNameCard();
    std::string nameSecondCard = secondCard.getNameCard();
    if (nameFirstCard == nameSecondCard) {
        std::cout << "The cards have the same names.\n\n";
    }
    else {
        std::cout << "The cards have NOT the same names.\n\n";
    }
}

void DebitCardStructure::addDebitCard(DebitCard&& debitCard) {
    debitCards.emplace_back(std::move(debitCard));
}

void DebitCardStructure::printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard) {
    if (!firstDebitCard.getWithdrawalOwnerNumber().empty() && !secondDebitCard.getWithdrawalOwnerNumber().empty()) {
        std::cout << "Withdrawal made from the accounts of both owners." << std::endl;
    }
    else if (!firstDebitCard.getWithdrawalOwnerNumber().empty()) {
        std::cout << "Withdrawal made from the account of owner with number: " << firstDebitCard.getWithdrawalOwnerNumber() << std::endl;
    }
    else if (!secondDebitCard.getWithdrawalOwnerNumber().empty()) {
        std::cout << "Withdrawal made from the account of owner with number: " << secondDebitCard.getWithdrawalOwnerNumber() << std::endl;
    }
    else {
        std::cout << "No money was withdrawn from these debit cards." << std::endl;
    }
}

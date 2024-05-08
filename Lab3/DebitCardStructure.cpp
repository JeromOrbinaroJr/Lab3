#include "DebitCardStructure.h"

void DebitCardStructure::addDebitCard(const DebitCard& debitCard) {
    debitCards.push_back(debitCard);
}

void DebitCardStructure::printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard) {
    if (firstDebitCard.getNumberOwner() == firstDebitCard.getWithdrawalOwnerNumber()) {
        std::cout << "Withdrawal made from the account of owner with number: " << firstDebitCard.getNumberOwner() << std::endl;
    }
    else if (secondDebitCard.getNumberOwner() == secondDebitCard.getWithdrawalOwnerNumber()) {
        std::cout << "Withdrawal made from the account of owner with number: " << secondDebitCard.getNumberOwner() << std::endl;
    }
    else {
        std::cout << "No money was withdrawn from these debit cards." << std::endl;
    }
}
#include "DebitCardStructure.h"

void DebitCardStructure::addDebitCard(const DebitCard& debitCard) {
    debitCards.push_back(debitCard);
}

void DebitCardStructure::printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard) {
    bool withdrawnFromFirstCard = firstDebitCard.getWithdrawalOwnerNumber() != "";
    bool withdrawnFromSecondCard = secondDebitCard.getWithdrawalOwnerNumber() != "";

    if (withdrawnFromFirstCard && withdrawnFromSecondCard) {
        std::cout << "Withdrawal made from the accounts of both owners." << std::endl;
    }
    else if (withdrawnFromFirstCard) {
        std::cout << "Withdrawal made from the account of owner with number: " << firstDebitCard.getWithdrawalOwnerNumber() << std::endl;
    }
    else if (withdrawnFromSecondCard) {
        std::cout << "Withdrawal made from the account of owner with number: " << secondDebitCard.getWithdrawalOwnerNumber() << std::endl;
    }
    else {
        std::cout << "No money was withdrawn from these debit cards." << std::endl;
    }
}

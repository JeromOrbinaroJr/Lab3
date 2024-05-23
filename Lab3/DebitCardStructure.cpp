#include "DebitCardStructure.h"

void DebitCardStructure::addDebitCard(const DebitCard& debitCard) {
    debitCards.push_back(debitCard);
}

void DebitCardStructure::printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard) {
    //bool withdrawnFromFirstCard = firstDebitCard.getWithdrawalOwnerNumber() != "";//.empty
    //bool withdrawnFromSecondCard = secondDebitCard.getWithdrawalOwnerNumber() != "";

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

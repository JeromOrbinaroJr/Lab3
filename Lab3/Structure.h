#pragma once
#include "BankCard.h"
#include "DebitCard.h"

struct BankCardStructure {
    std::vector<BankCard> cards;//dynamic_cast<Debit> -> ??????????

    void addCard(BankCard&& card);
    const std::vector<BankCard>& getAllCards() const;
    const std::tm& getValidityPeriodByOwnerNumber(std::string ownerNumber) const;
    void sameNames(const BankCard& firstCard, const BankCard& secondCard);
};

struct DebitCardStructure {
    std::vector<DebitCard> debitCards;

    void addDebitCard(DebitCard&& debitCard);

    void printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard);
};


#pragma once
#include "BankCard.h"

struct BankCardStructure {
    std::vector<BankCard> cards;//dynamic_cast<Debit> -> 

    void addCard(const BankCard&& card);
    const std::vector<BankCard>& getAllCards() const;
    std::string getValidityPeriodByOwnerNumber(std::string ownerNumber) const&;
    void sameNames(const BankCard& firstCard, const BankCard& secondCard);
};
    
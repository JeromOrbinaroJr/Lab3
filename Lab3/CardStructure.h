#pragma once
#include "BankCard.h"

struct CardStructure {
    std::vector<BankCard> cards;

    void addCard(const BankCard& card);
    const std::vector<BankCard>& getAllCards() const;
    std::string getValidityPeriodByOwnerNumber(int64_t ownerNumber) const;
    void sameNames(const BankCard& firstCard, const BankCard& secondCard);
};

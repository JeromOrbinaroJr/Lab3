#pragma once
#include <vector>
#include <iostream>
#include "DebitCard.h"

struct DebitCardStructure {
    std::vector<DebitCard> debitCards;

    void addDebitCard(const DebitCard& debitCard);

    void printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard);
};


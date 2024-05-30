//#pragma once
//#include "BankCard.h"
//#include "DebitCard.h"
//#include <optional>
//
//struct BankCardStructure {
//    std::vector<BankCard> cards;//dynamic_cast<Debit> -> ??????????
//
//    void addCard(BankCard&& card);
//    const std::vector<BankCard>& getAllCards() const;
//    std::optional<std::tm>& getValidityPeriodByOwnerNumber(std::string ownerNumber) const;
//    void sameNames(const BankCard& firstCard, const BankCard& secondCard);
//};
//
//struct DebitCardStructure {
//    std::vector<DebitCard> debitCards;
//
//    void addDebitCard(DebitCard&& debitCard);
//
//    void printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard);
//};


#pragma once
#include "BankCard.h"
#include "DebitCard.h"
#include <vector>
#include <optional>

struct BankCardStructure {
    std::vector<BankCard> cards;

    void addCard(BankCard&& card);
    const std::vector<BankCard>& getAllCards() const;
    std::optional<std::tm> getValidityPeriodByOwnerNumber(const std::string& ownerNumber) const;
    void sameNames(const BankCard& firstCard, const BankCard& secondCard);
};

struct DebitCardStructure {
    std::vector<DebitCard> debitCards;

    void addDebitCard(DebitCard&& debitCard);
    void printWithdrawalOwnerNumber(const DebitCard& firstDebitCard, const DebitCard& secondDebitCard);
};

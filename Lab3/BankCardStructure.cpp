#include "BankCardStructure.h"

void BankCardStructure::addCard(const BankCard& card) {
	cards.push_back(card);
}

const std::vector<BankCard>& BankCardStructure::getAllCards() const {
	return cards;
}

std::string BankCardStructure::getValidityPeriodByOwnerNumber(std::string ownerNumber) const {
    for (const auto& card : cards) {
        if (card.getNumberOwner() == ownerNumber) {
            return card.getValidityPeriod();
        }
    }
    return "There is no such client.";
}

void BankCardStructure::sameNames(const BankCard& firstCard, const BankCard& secondCard) {
    std::string nameFirstCard = firstCard.getNameCard();
    std::string nameSecondCard = secondCard.getNameCard();
    if (nameFirstCard == nameSecondCard) {
        std::cout << "The cards have the same names.\n\n";
    }
    else {
        std::cout << "The cards have NOT the same names.\n\n";
    }
}
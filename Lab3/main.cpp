#include <iostream>
#include "DataLoader.h"
#include "DebitCard.h"

int main() {
    CardStructure cardStructure;
    int64_t codeOwner;

    std::cout << firstCard << std::endl;
    cardStructure.addCard(firstCard);
    firstDebitCard.createDebitCard(firstCard);

    std::cout << secondCard << std::endl;
    cardStructure.addCard(secondCard);
    secondDebitCard.createDebitCard(secondCard);

    //cardStructure.sameNames(firstCard, secondCard);

    /*
    std::cout << "Enter owner code: ";
    std::cin >> codeOwner;
    std::cout << "Validity period of card with this code owner: " << cardStructure.getValidityPeriodByOwnerNumber(codeOwner) << std::endl;
    */
    withdrawMoney(cardStructure.getAllCards(), 1111111, 1000);

    return 0;
}

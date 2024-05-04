#include <iostream>
#include "DataLoader.h"

int main() {
    CardStructure cardStructure;
    int64_t codeOwner;

    std::cout << firstCard << std::endl;
    cardStructure.addCard(firstCard);
    std::cout << secondCard << std::endl;
    cardStructure.addCard(secondCard);

    if (cardStructure.sameNames(firstCard, secondCard)) {
        std::cout << "The cards have the same names.\n\n";
    }
    else {
        std::cout << "The cards have NOT the same names.\n\n";
    }

    std::cout << "Enter owner code: ";
    std::cin >> codeOwner;
    std::cout << "Validity period of card with this code owner: " << cardStructure.getValidityPeriodByOwnerNumber(codeOwner) << std::endl;

    return 0;
}

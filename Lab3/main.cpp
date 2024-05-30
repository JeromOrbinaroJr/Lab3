#include <iostream>
#include "DataLoader.h"

int main() {

    try {
        uploadingData();

        std::cout << firstCard << std::endl;
        std::cout << secondCard << std::endl;
        std::cout << firstDebitCard << std::endl;
        std::cout << secondDebitCard << std::endl;

        firstDebitCard.depositMoney(100);
        secondDebitCard.withdrawMoney(500);
        debitCardStructure.printWithdrawalOwnerNumber(firstDebitCard, secondDebitCard);
    }
    catch (const std::invalid_argument& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
    }
    return 0;
}


#include <iostream>
#include "DataLoader.h"

int main() {
    uploadingData();

    std::cout << firstCard << std::endl;
    std::cout << secondCard << std::endl;
    std::cout << firstDebitCard << std::endl;
    std::cout << secondDebitCard << std::endl;

    firstDebitCard.depositMoney(100);
    secondDebitCard.withdrawMoney(500);
    debitCardStructure.printWithdrawalOwnerNumber(firstDebitCard, secondDebitCard);

    return 0;
}

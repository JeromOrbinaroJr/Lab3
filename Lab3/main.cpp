#include <iostream>
#include "DataLoader.h"
#include "DebitCard.h"
#include "DebitCardStructure.h"

int main() {
    BankCardStructure bankCardStructure;
    DebitCardStructure debitCardStructure;
    int64_t codeOwner;

    std::cout << firstCard << std::endl;
    bankCardStructure.addCard(firstCard);
    firstDebitCard.createDebitCard(firstCard);
    debitCardStructure.addDebitCard(firstDebitCard);

    std::cout << secondCard << std::endl;
    bankCardStructure.addCard(secondCard);
    secondDebitCard.createDebitCard(secondCard);
    debitCardStructure.addDebitCard(secondDebitCard);

    secondDebitCard.withdrawMoney(1111111, 500);
    debitCardStructure.printWithdrawalOwnerNumber(firstDebitCard, secondDebitCard);

   /* cardStructure.sameNames(firstCard, secondCard);
    std::cout << "Enter owner code: ";
    std::cin >> codeOwner;
    std::cout << "Validity period of card with this code owner: " << cardStructure.getValidityPeriodByOwnerNumber(codeOwner) << std::endl;*/

    return 0;
}

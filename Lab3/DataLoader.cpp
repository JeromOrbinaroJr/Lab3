#include "DataLoader.h"

BankCard firstCard("FIRST", "1234567890", "01/01/2023", "Ivanov", "Ivan", "Ivanovich", "1111111", 1000);
DebitCard firstDebitCard("Visa");
BankCard secondCard("SECOND", "9876543210", "01/01/2024", "Petrov", "Petr", "Petrovich", "2222222", 2000);
DebitCard secondDebitCard("Mastercard");

void initData(BankCardStructure& bankCardStructure, DebitCardStructure& debitCardStructure) {
    std::cout << firstCard << std::endl;
    bankCardStructure.addCard(firstCard);
    firstDebitCard.createDebitCard(firstCard);
    debitCardStructure.addDebitCard(firstDebitCard);

    std::cout << secondCard << std::endl;
    bankCardStructure.addCard(secondCard);
    secondDebitCard.createDebitCard(secondCard);
    debitCardStructure.addDebitCard(secondDebitCard);

    std::cout << firstDebitCard << std::endl;
    std::cout << secondDebitCard << std::endl;
}


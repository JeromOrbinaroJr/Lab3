#include <iostream>
#include "DataLoader.h"
#include "DebitCard.h"
#include "DebitCardStructure.h"

int main() {
    BankCardStructure bankCardStructure;
    DebitCardStructure debitCardStructure;

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

    //Вывода срока действия карты по коду владельца
    std::string codeOwner;
    std::cout << "Enter owner code: ";
    std::cin >> codeOwner;
    std::cout << "Validity period of card with this code owner: " << bankCardStructure.getValidityPeriodByOwnerNumber(codeOwner) << std::endl;

    //Имеют ли две карты одинаковые имена
    bankCardStructure.sameNames(firstCard, secondCard);

    //Операции положить и снять деньги на счёте дебетовой карты 
    firstDebitCard.depositMoney(1000);
    secondDebitCard.withdrawMoney(500);

    //Какая из двух карт провела операцию снятия денег 
    debitCardStructure.printWithdrawalOwnerNumber(firstDebitCard, secondDebitCard);

    return 0;
}

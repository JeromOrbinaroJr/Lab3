#include <iostream>
#include "DataLoader.h"
#include "DebitCard.h"
#include "DebitCardStructure.h"

int main() {
    BankCardStructure bankCardStructure;
    DebitCardStructure debitCardStructure;

    initData(bankCardStructure, debitCardStructure);

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

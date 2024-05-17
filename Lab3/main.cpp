#include <iostream>
#include "DataLoader.h"
#include "DebitCard.h"
#include "DebitCardStructure.h"

int main() {
    BankCardStructure bankCardStructure;
    DebitCardStructure debitCardStructure;

    initData(bankCardStructure, debitCardStructure);

    //������ ����� �������� ����� �� ���� ���������
    std::string codeOwner;
    std::cout << "Enter owner code: ";
    std::cin >> codeOwner;
    std::cout << "Validity period of card with this code owner: " << bankCardStructure.getValidityPeriodByOwnerNumber(codeOwner) << std::endl;

    //����� �� ��� ����� ���������� �����
    bankCardStructure.sameNames(firstCard, secondCard);

    //�������� �������� � ����� ������ �� ����� ��������� ����� 
    firstDebitCard.depositMoney(1000);
    secondDebitCard.withdrawMoney(500);

    //����� �� ���� ���� ������� �������� ������ ����� 
    debitCardStructure.printWithdrawalOwnerNumber(firstDebitCard, secondDebitCard);

    return 0;
}

#pragma once
#include "Structure.h"

BankCardStructure bankCardStructure;
DebitCardStructure debitCardStructure;

BankCard firstCard("FIRST", "1234567890", std::tm{ 0, 0, 0, 1, 1, 2024 - 2023 }, "Ivanov", "Ivan", "Ivanovich", "1111111", 1000);
DebitCard firstDebitCard("Visa");
BankCard secondCard("SECOND", "9876543210", std::tm{ 0, 0, 0, 1, 1, 2023 - 2022 }, "Petrov", "Petr", "Petrovich", "2222222", 2000);
DebitCard secondDebitCard("Mastercard");

void uploadingData() {
	bankCardStructure.addCard(std::move(firstCard));
	bankCardStructure.addCard(std::move(secondCard));

	debitCardStructure.addDebitCard(std::move(firstDebitCard));
	debitCardStructure.addDebitCard(std::move(secondDebitCard));
}

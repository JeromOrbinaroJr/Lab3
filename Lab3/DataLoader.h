#pragma once
#include "BankCard.h"
#include "DebitCard.h"
#include "BankCardStructure.h"
#include "DebitCardStructure.h"

extern BankCard firstCard;
extern DebitCard firstDebitCard;
extern BankCard secondCard;
extern DebitCard secondDebitCard;

void initData(BankCardStructure& bankCardStructure, DebitCardStructure& debitCardStructure);


#include "BankCard.h"
#include "DataLoader.h"
#include <iostream>
#include <cinttypes>
#include <vector>

//Constructor
BankCard::BankCard() {}

//valid?

BankCard::BankCard(const std::string& nameCard, const std::string& numberCard, const std::string& validityPeriod, const std::string& surnameOwner, const std::string& nameOwner, const std::string& patronymicOwner, const std::string& numberOwner, const int& scoreCard) :
	m_nameCard(nameCard), m_numberCard(numberCard), m_validityPeriodCard(validityPeriod), m_surnameOwner(surnameOwner), m_nameOwner(nameOwner), m_patronymicOwner(patronymicOwner), m_numberOwner(numberOwner), m_scoreCard(scoreCard) {}

//Destructor
BankCard::~BankCard(){}

//Getters
std::string BankCard::getNameCard() const& { return m_nameCard; }
std::string BankCard::getNumberCard() const& { return m_numberCard; }
std::string BankCard::getValidityPeriod() const& { return m_validityPeriodCard; }
std::string BankCard::getSurnameOwner() const& { return m_surnameOwner; }
std::string BankCard::getNameOwner() const& { return m_nameOwner; }
std::string BankCard::getPatronomycOwner() const& { return m_patronymicOwner; }
std::string BankCard::getNumberOwner() const& { return m_numberOwner; }
int BankCard::getScoreCard() const { return m_scoreCard; }

//Setters
void BankCard::setNameCard(const std::string& nameCard) { this->m_nameCard = nameCard; }
void BankCard::setNumberCard(const std::string& numberCard) { this->m_numberCard = numberCard; }
void BankCard::setValidityPeriod(const std::string& validityPeriod) { this->m_validityPeriodCard = validityPeriod; }
void BankCard::setSurnameOwner(const std::string& surnameOwner) { this->m_surnameOwner = surnameOwner; }
void BankCard::setNameOwner(const std::string& nameOwner) { this->m_nameOwner = nameOwner; }
void BankCard::setPatronymicOwner(const std::string& patronymicOwner) { this->m_patronymicOwner = patronymicOwner; }
void BankCard::setNumberOwner(const std::string& numberOwner) { this->m_numberOwner = numberOwner; }
void BankCard::setScoreCard(const int& scoreCard) { this->m_scoreCard = scoreCard; }

//Operator Overloading
std::ostream& operator<<(std::ostream& os, const BankCard& card) {
	std::cout << "Information of Card:" << std::endl;
	os << "Card name: " << card.getNameCard() << std::endl;
	os << "Card number: " << card.getNumberCard() << std::endl;
	os << "Validity period card: " << card.getValidityPeriod() << std::endl;
	os << "Surname owner of card: " << card.getSurnameOwner() << std::endl;
	os << "Name owner of card: " << card.getNameOwner() << std::endl;
	os << "Patronomyc owner of card: " << card.getPatronomycOwner() << std::endl;
	os << "Number owner: " << card.getNumberOwner() << std::endl;
	os << "Score of card: " << card.getScoreCard() << std::endl;
	return os;
}
